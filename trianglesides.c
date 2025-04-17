#include<stdio.h>
void main()/*Haju pan javab sacho aavel nathi.*/
{/*aa program khoto che tatha lakavano baki che.*/
	float a,b,c;
	printf("Enter side a:");
	scanf("%f",&a);
	printf("Enter side b:");
	scanf("%f",&b);
    printf("Enter side c:");
	scanf("%f",&c);
    if(a==b&&b==c){
    	printf("The Triangle is Equlateral.");
    }
    else if(a==b||b==c||c==a){
		if(a*a== b*b + c*c || c*c == a*a + b*b || b*b == c*c + a*a){
			printf("Right Angle Triangle\n");}
			printf("Isosceles Triangle");
		} 
	else if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a){
		printf("The Triangle is Right Angle Triangle.");
		}
		else{
			printf("Scalen Triangle.");
		}
	}



