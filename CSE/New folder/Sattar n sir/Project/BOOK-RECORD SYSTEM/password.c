//Code :
# include<stdio.h>
# include<stdio.h>
# include<process.h>
# include<stdlib.h>
# include<ctype.h>
# include<conio.h>
# include<mem.h>

unsigned char Data[100001];
unsigned char keystream[1001];
int Rpoint[300];

void main(int argc,char *argv[]){
	FILE *fd;
	int i,j;
	int size;
	char ch;
	char *name;
	int cracked;
	int sizemask;
	int maxr;
	int rsz;
	int pos;
	int Rall[300];     /* Resourse allocation table */

	if(argc<2){
			printf("usage: glide filename (username)");
			exit(1);
	}
	/* Read PWL file */

	fd=fopen(argv[1],"rb");
	if(fd==NULL){
				  printf("can't open file %s",argv[1]);
				  exit(1);
	}
	size=0;
	while(!feof(fd)){
			Data[size++]=fgetc(fd);
	}
	size--;
	fclose(fd);

	/* Find Username */
	name=argv[1];
	if(argc>2)name=argv[2];
	printf("Username:%s",name);

	/* Copy encrypted text into keystream */
	cracked=size-0x0208;
	if(cracked<0)cracked=0;
	if(cracked>1000)cracked=1000;
	memcpy(keystream,Data+0x208,cracked);

	/* Generate 20 bytes of keystream */
	for(i=0;i<20;i++){
			ch=toupper(name[i]);
			if(ch==0)break;
			if(ch=='.')break;
			keystream[i]^=ch;
	};
	cracked=20;

	/* Find allocated resources */

	sizemask=keystream[0]+(keystream[1]<<8);
	printf("Sizemask:%04X",sizemask);

	for(i=0;i<256;i++){
			if(Data[i]!=0xff){
								Rall[Data[i]]++;
								if(Data[i]>maxr)maxr=Data[i];
			}
	}

	maxr=(((maxr/16)+1)*16); /* Resourse pointer table size appears to be
	divisible by 16 */

	/*Search after resources */

	Rpoint[0]=0x0208+2*maxr+20+2; /* First resources */
	for(i=0;i<maxr;i++){
				/* Find the size of current resourse */
				pos=Rpoint[i];
				rsz=Data[pos]+(Data[pos+1]<<8);
				rsz^=sizemask;
				printf("Analysing block with size:%04x	(%d:%d)",rsz,i,Rall[i]);
				if((Rall[i]==0)&&(rsz!=0)){
								printf("Unused resourse has nonzero size!!!");
								printf("If last line produed any:You may try to recover");
								printf("Press y to attempt the recovery");
								ch=getch();
								if(ch!='y')exit(0);
								rsz=2;
								i=i-1;
				}
				pos=pos+rsz;

				/* Resourse have a tedency to have the wrong size for some reason*/
				/* Chech for correct size*/

				if(i<maxr-1){
								while(Data[pos+3]!=keystream[1]){
														printf(":",Data[pos+3]);
														pos=pos+2; /* Very rude may fail */
								}
				}
				pos+=2; /* Include pointer in size */
				Rpoint[i+1]=pos;
	}
	Rpoint[maxr]=size;
	/* Insert Table data into keystream*/
	for(i=0;i<=maxr;i++){
					keystream[20+2*i]^=Rpoint[i] & 0x00ff;
					keystream[21+2*i]^=(Rpoint[i]>>8) & 0x00ff;
	}
	cracked+=maxr*2+2;
	printf("%d Bytes of ketstream recoverd",cracked);

	/* Decrypt resources */
	for(i=0;i<maxr;i++){
							rsz=Rpoint[i+1]-Rpoint[i];
							if(rsz>cracked)rsz=cracked;
							printf("Resource[%d](%d)",i,rsz);
							for(j=0;j<rsz;j++)
							printf("%c",Data[Rpoint[i]+j]^keystream[j]);
							printf(" ");
	}
	
getch();
}
