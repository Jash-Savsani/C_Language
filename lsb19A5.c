/*Replace a character in given string*/
#include<stdio.h>
#include<string.h>
void main()
{
    char n[100],a,b,i;
    printf("Enter a String:");
    gets(n);
    printf("Which Char Would you want to chage:");
    getchar(a);
    printf("By Whom:");
    getchar(b);
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]==a)
        {
            n[i]=b;
        }
    }
    printf("Now Your New String is %s",n);
    
    
}