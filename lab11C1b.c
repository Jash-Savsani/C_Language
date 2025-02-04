#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter a Number of Series:");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(k=n-i;k>=1;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
