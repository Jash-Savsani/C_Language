#include<stdio.h>
void main()
{
int n,i=101;
while(i<200)
{
    if(i%7==0)
    {
        if(i%5!=0)
        {
            printf("%d\n",i);
        }
    }
    i++;
}
printf(":are numbers that divisable by 7 but not by 5.");
}