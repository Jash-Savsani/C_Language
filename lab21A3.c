/*Demonstrate difference between structure and union.*/
#include<stdio.h>
struct student
{
    float name[50];
    int rollno;
    float per;
};
union cricket
{
    float player[50];
    int runs;
    float avg;
};
void main()
{
    struct student s1;
    union cricket p1;
    printf("Address of Structure Members:");
    printf("%p",&s1.name);
    printf("\t%u\n",&s1.name);
    printf("%p",&s1.rollno);
    printf("\t%u\n",&s1.rollno);
    printf("%p",&s1.per);
    printf("\t%u\n\n",&s1.per);
    printf("Address of Union Members:");
    printf("%p",&p1.player);
    printf("\t%u\n",&p1.player);
    printf("%p",&p1.runs);
    printf("\t%u\n",&p1.runs);
    printf("%p",&p1.avg);
    printf("\t%u\n",&p1.avg);
}