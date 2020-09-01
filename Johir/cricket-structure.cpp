#include<stdio.h>
#include<conio.h>
struct cricket
{
	char p_name[50];
	char t_name[15];
	float b_avg;	
};
main()
{
struct cricket c[50];
int i,j;
printf("\n\n Enter information of cricketers:\n");
for(i=1;i<=50;i++)
{
	printf("\n Enter player name:");
	scanf("%s",&c[i].p_name);
	printf("\n Enter team name:");
	scanf("%s",&c[i].t_name);
	printf("\n Enter batting average:");
	scanf("%f",&c[i].b_avg);
	printf("\n\n\n");
}
printf("\n Displaying information of cricketers:\n");
for(j=1;j<=50;j++)
{
printf("\n\n\n Player Name:%s\n",c[j].p_name);
printf("\n Team Name:%s\n",c[j].t_name);
printf("\n Batting Average:%.2f\n",c[j].b_avg);
}
getch();
}
