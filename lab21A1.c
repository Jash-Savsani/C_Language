/*Create, declare and initialize structure employee.*/
#include<stdio.h>
struct employee
{
    char name[50];
    int age;
    float salary;
};
void main()
{
    struct employee e1;
    printf("Enter Your Name:");
    scanf("%s",e1.name);
    printf("Enter Your Age:");
    scanf("%d",&e1.age);
    printf("Enter Your Salary:");
    scanf("%f",&e1.salary);
    printf("%s\n",e1.name);
    printf("%d\n",e1.age);
    printf("%f\n",e1.salary);
}