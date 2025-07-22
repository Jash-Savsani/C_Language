#include<stdio.h>
void main()
{
	int a[5],b[5],i,maxh=0,h=1,w=1,minw=0;
	for(i=0;i<5;i++)
	{
		printf("Enter %d Height:",h);
		scanf("%d",&a[i]);
		if(a[i]>170)
		{
			maxh++;
		}
		h++;
	}
	printf("Greater than 170 height is : %d",maxh);
		for(i=0;i<5;i++)
	{
		printf("\nEnter %d Weight:",w);
		scanf("%d",&b[i]);
		if(b[i]<50)
		{
			minw++;
		}
		w++;
	}
	printf("Less than 50Kg  is : %d",minw);
}

























//#include<stdio.h>
//void main()
//{
//	int a[5][2],i,j,h=1,w=1,maxh=0,minw=0;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<1;j++)
//		{
//			printf("Enter %d Height:",h);
//			scanf("%d",&a[i][j]);
//			if(a[i][j]>170)
//			{
//				maxh++;
//			}
//			h++;
//		}
//		for(j=1;j<2;j++)
//		{
//			printf("Enter %d Weight:",w);
//			scanf("%d",&a[i][j]);
//			if(a[i][j]<50)
//			{
//				minw++;
//			}
//			w++;
//		}
//		
//	}
//	printf("\nGreater than 170 Height is : %d",maxh);
//	printf("\nLess than 50Kg Weight is : %d",minw);
//}
