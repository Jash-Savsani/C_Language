#include<stdio.h>
struct student
{
	char name[50];
	int rollno;
	float per;
}s[3];
void main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter s[%d] Student name:",i);
		scanf("%s",s[i].name);
		printf("Enter s[%d] Student RollNo:",i);
		scanf("%d",&s[i].rollno);
		printf("Enter s[%d] Student Percantage:",i);
		scanf("%f",&s[i].per);
	}
	for(i=0;i<3;i++)
	{
		printf("\ns[%d] Name: %s",i,s[i].name);
		printf("\ns[%d] RollNo: %d",i,s[i].rollno);
		printf("\ns[%d] Percantage: %f",i,s[i].per);
	}
}
