/*Write a program to read the marks of one subject of 20 students and computes the number of students in categories 
FAIL, PASS, FIRST CLASS and DISTINCTION using array.*/
#include<stdio.h>
void main()
{
	int n,i,f=0,p=0,fc=0,d=0;
	printf("Enter Number of Students who Attempted Exam:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d Student marks in C : ",i+1);
		scanf("%d",&a[i]);
		if(a[i]<=25){
			f++;
		}
		else if(a[i]<=50){
			p++;
		}
		else if(a[i]<=75){
			d++;
		}
		else if(a[i]<=100){
			fc++;
		}
	}
	printf("Total Number of Students in FAIL is: %d\n",f);
	printf("Total Number of Students in PASS is: %d\n",p);
	printf("Total Number of Students in DISTINCTION is: %d\n",d);
	printf("Total Number of Students in FIRST CLASS is: %d\n",fc);
}
