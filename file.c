#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("abc.txt","r");
	fp2=fopen("xyz.txt","w");
	fprintf(fp2,"Hello MOTO");
	do
	{
		ch=getc(fp1);
		putc(ch,fp2);	
	}
	while(ch!=EOF);
	fclose(fp1);
	fclose(fp2);
}
