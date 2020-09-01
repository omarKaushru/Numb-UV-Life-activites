#include<stdio.h>
#include<conio.h>

main(){
	int M[5][6],S[5][6],C[6],Mvalue[5][6],Svalue[5][6],Mweek[5],Sweek[5],Mproduct[6],Sproduct[6],Mtotal,Stotal,i,j,number;
printf("Enter products manufactured week wise \n");
printf("M11,M12,_,M21,M22_etc\n");
for(i=1; i<4; i++)
for(j=1; j<5; j++)
scanf("%d",&M[i][j]);
printf("Enter products sold week wise \n");
printf("S11,S12,_,S21,S22_etc\n");
for(i=1; i<4; i++)
for(j=1; j<5; j++)
scanf("%d",&S[i][j]);
printf("Enter cost of each products\n");
for(j=1; j<5; j++)
scanf("%d",&C[j]);
for(i=1; i<4; i++)
for(j=1; j<5; j++){
	Mvalue[i][j]=M[i][j]*C[j];
    Svalue[i][j]=S[i][j]*C[j];	
}
for(i=1; i<4; i++)
{
Mweek[i]=0;
Sweek[i]=0;
for(j=1; j<5; j++)
{
Mweek[i]+= Mvalue[i][j];
 Sweek[i]+= Svalue[i][j];
	}
}
for(j=1; j<5; j++)
{
Mproduct[j]=0;
Sproduct[j]=0;
for(i=1; i<4; i++)
{
	Mproduct[j]+= Mvalue[i][j];
	Sproduct[j]+= Svalue[i][j];	
	}
}
Mtotal=Stotal=0;
for(i=1; i<4; i++)
{
	Mtotal+=Mweek[i];
	Stotal+=Sweek[i];
}

printf("\n\n");
printf("Following is the list of things you can\n");
printf("Request for enter appropriate item number\n");
printf("and press return key\n\n");
printf("1.value matrics ofproduction & sales\n");
printf("2.Total value of weekly production & sales\n");
printf("3.product_wise monthly value of production &");
printf("sales\n");
printf("4.Grand total value of production & sales\n");
printf("5.Exit\n");
number=0;
while(1){
	printf("ENTER YOUR CHOICEL:");
	scanf("%d", &number);
	printf("\n");
	if(number==5)
	{
		printf("G O O D		B Y E\n\n");
		break;
	}
	switch(number)
	{
		case 1:
			printf("VALUE MATRIX OF PRODUCTION\n\n");
			for(i=1; i<4; i++)
			{
				printf("Week(%d)\t",i);
				for(j=1; j<5; j++)
				printf("%7d", Mvalue[i][j]);
				printf("\n");
			}
			printf("\nVALUE MATRIX OF SALES \n\n");
			for(i=1; i<4; i++)
			{
				printf("Week(%d)\t",i);
			    for(j=1; j<5; j++)
				printf("%7d",Svalue[i][j])	;
				printf("\n");
			}
			break;
		case 2:
			printf("TOTAL WEEKLY PRODUCTION & SALES\n\n");
			printf("			 PRODUCTION   SALES\n");
			printf("				-------   -----\n");
			for(i=1; i<4; i++)
			{
				printf("Week(%d)\t",i);
				printf("%7d\t%7d\n",Mweek[i], Sweek[i]);
			}
			break;
		case 3:
			printf("PRODUCT_WISE TOTAL PRODUCTION &");
			printf("SALES\n\n");
			printf("			 PRODUCTION   SALES\n");
			printf("				-------   -----\n");
			 for(j=1; j<5; j++)
			 {
			 	printf("product(%d)\t",j);
			 	printf("%7d\t%7d\n", Mproduct[j],Sproduct[j]);
			 }
			 break;
			 case 4:
			 	printf("GRAND TOTAL OF PRODUCTION & SALES\n");
			 	printf("\nTotal production= %d\n",Mtotal);
			 	printf("Total sales= %d\n", Stotal);
			 	break;
			 	default:
			 		printf("Wrong choice, select again\n\n");
			 		break;
	}
}

}




		

