/*Find a character from given string.*/
#include<string.h>
#include<stdio.h>
void main()
{
    int i,count=0;
    char a[100],f;
    printf("Enter a String:");
    gets(a);
    //scanf("%s",a);
    printf("Which Character Would You Want To Find:");
    scanf("%c",&f);
    getchar();
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==f)
        {
           printf("Your Find Character %c is at %d position\n",f,i+1);
           count=1;
         
        }
    }
    if(count==0)
    {
        printf("Enter Character not Found:");
    }
 }
