//Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n. (Series should be printed also along with sum)
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter Ending of Series:");
	scanf("%d",&n);
	i=1;
	while(i<=n){
	
//	for(i=1;i<=n;i++){
		if(i%2!=0)//odd position
		{
			printf("+%d",i);
			sum+=i;
		}
		else//even possition
		{
			printf("-%d",i);
			sum-=i;
		}
		i++;
	}
	printf("\n Sum of Series is: %d",sum);
}
