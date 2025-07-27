#include<string.h>
#include<stdio.h>
void main()
{
	int l;
	char a[50];
	printf("Enter a String:");
	gets(a);
	printf("Your Entered String is=%s",a);
	l=strlen(a);
	printf("\nString lenght is:%d",l);
}
