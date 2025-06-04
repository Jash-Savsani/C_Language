#include<stdio.h>
void main()
{
    int i,n,sum;
    printf("Enter Your Ending Number:");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n){
        sum=sum+i;
        i+=1;
        }
        printf("Your Sum is:%d",sum);
 
}
