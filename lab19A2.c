#include<stdio.h>
void array()
{
    int n,i;
    printf("Enter Number of Elements in Array a[n]:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter a Num:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nYour Enter a[%d] is:%d",i,a[i]);
    }
}
void main()
{
    array();
}