/*. Swap two arrays using pointers.*/
#include<stdio.h>/*aa program baaki che.*/
void main()
{
    int n1,n2,i;
    printf("How many elements in first array:");
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++)
    {
        printf("Enter a a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("How many elements in second array:");
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++)
    {
        printf("Enter a b[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Swap of two array is:\nNow first array is:");
    for(i=0;i<n2;i++)
    {
      a[i]=*(b+i);
      printf("\n%d",a[i]);
    }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    