  #include<stdio.h>
#include<string.h>
void jash(char name2[100])
{
    int l;
    l=strlen(name2);
    printf("Length of String is: %d",l);
    char copy[100];
    strcpy(copy,name2);
    printf("Copy of String is: %s",copy);
    char papa[100]=" Alpeshbhai Savsani";
    strncat(papa,name2,11);
    printf("%s",name2);
    puts(strrev(name2));
    puts(strlwr(name2));
    
    
}
void main()
{
    int l;
    char name1[100];
    printf("Enter a String:");
    scanf("%s",name1);
    void jash(name1);
}
