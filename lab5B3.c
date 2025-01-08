#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,ans,ans1,ans2;
	int i;
	printf("Enter x2:");
	scanf("%f",&a);
	printf("Enter x:");
	scanf("%f",&b);
	printf("Enter c:");
	scanf("%f",&c);
	for(i=1;i<=3;i++){
		switch(i)
		{
			case 1:	ans1=-b;
					continue;/*"countinue" key-word vade compiler direct for loop na incremenrt / decrement step ma pahonchi jay che.*/
			case 2: ans2=sqrt((b*b)-(4*a*c));
					continue;
			case 3: ans=(ans1+ans2)/(2*a);
					printf("x=%f",ans);
					continue;		
		}
	}
}
