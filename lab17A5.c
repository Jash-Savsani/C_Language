/*5. Store n elements in an array and print the elements using pointer*/
#include<stdio.h>
void main()
{
int n,i;
printf("How many elements would you like to store:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter a Element:");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    printf("Your a[%d] is =%d\n",i,*(a+i));
}
}
