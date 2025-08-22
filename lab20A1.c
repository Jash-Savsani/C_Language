/*Find weather given string is palindrome or not*/
#include<stdio.h>
#include<string.h>
void main()
{
    int count=0,i;
    char a[100],b[100];
    printf("Enter a String:");
    gets(a);
    b[100]=strrev(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i])
        {
            count++;
        }
    }
    if(count==strlen(a))
    {
        printf("Given String is Pelindrome.");
    }
    else
    {
        printf("Given String is Not Palindrome.");
    }
}