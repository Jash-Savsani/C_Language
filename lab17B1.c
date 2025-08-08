/*Copy one array to another using pointers.*/
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a how mant elements you want in array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter a a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=*(a+i);
    }
    printf("Your copy array is:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",b[i]);
    }
}