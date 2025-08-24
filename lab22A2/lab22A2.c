#include<stdio.h>
void main()
{
    FILE *fp;
    char ch1;
    int word=0,line=0,ch2=0;
    fp=fopen("xyz.txt","r");
    do
    {
        ch1=getc(fp);
        if(ch1!='\n'||ch1!=' ')
        {
            ch2++;
        }
        else if(ch1=='\n'||ch1==' ')
        {
            word++;
            if(ch1=='\n')
            {
                line++;
            }
        }
        printf("%c",ch1);
    }
    while (ch1!=EOF);
    printf("\n\nWords=%d",word);
    printf("\nLines=%d",line);
    printf("\nCharacters=%d",ch2);
    
}