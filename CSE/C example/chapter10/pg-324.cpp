#include<stdio.h>
#include<conio.h>
struct Class
{
	int number;
	char name[20];
	float marks;
};
main(){
	int x;
	struct Class student1={111,"Rao",72.50};
	struct Class student2={222,"Reddy",67.00};
	struct Class student3;
	
	student3=student2;
	
	x=((student3.number == student2.number) &&
		(student3.marks == student2.marks)) ? 1 : 0;
	
	if( x == 1)
	{
		printf("\nstudent2 and student3 are same\n\n");
		printf("%d %s %f\n", student3.number,
							 student3.name,
							 student3.marks);
	}
	else
	printf("\nstudent2 and student3 are different\n\n");
}
