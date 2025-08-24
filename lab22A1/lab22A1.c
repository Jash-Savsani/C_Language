#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("abc.txt","a");
    fprintf(fp,"Hii Jash");
    fclose(fp);
}