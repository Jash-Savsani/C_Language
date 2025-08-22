/*Using a String pointer remove a space and special character from string*/
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,j=0,length;
    char a[],b[];
    printf("Enter a String:");
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++)
    {
        if(isalnum(a))
        {
            b[j++]=a[i]
        }
    }
    b[j]='\0';
    printf("Your AlphaNummeric String is: %s",b);
    
}