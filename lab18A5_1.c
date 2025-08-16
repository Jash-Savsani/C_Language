/*call by reference or call by address*/
#include<stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;/*temp ma je valuue che tene y var na value adderss na value ma rewrite karel che.*/
}
void main()
{
	int a,b;
	printf("Enter First and Second Nuumber:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("Swap of Two Numbers:%d and %d",a,b);
}
