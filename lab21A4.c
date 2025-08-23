/*Create structure student with name, percentage and age. Read data of 5 students using
array of structure.*/
/*Create a structure book with book title, author, publication, and price. Read data of 3
books and display.*/
#include<stdio.h>
struct student
{
  char name[50];
  int age;
  float per;
}s[5];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter a %d Student Name:",i+1);
        scanf("%s",s[i].name);
        printf("Enter a Student Age:");
        scanf("%d",&s[i].age);
        printf("Enter a Student Percenage:");
        scanf("%f",&s[i].per);
        
    }
    printf("\n\n\nList of Student Details:");
    for(i=0;i<5;i++)
    {
        printf("\ns[%d] Student Name:%s",i+1,s[i].name);
        printf("\ns[%d] Student Age:%d",i+1,s[i].age);
        printf("\ns[%d] Student Percantage:%f",i+1,s[i].per);
    }
}
