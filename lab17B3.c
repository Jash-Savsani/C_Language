/*Add two matrix using pointers.*/
#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("How many row in matrix:");
    scanf("%d",&r);
    printf("How many column in matrix:");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now Enter Number for Second Arrary.\n");
    int b[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of two arrary is.\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d ",a[i][j]+b[i][j]);/*ahi only pointer ni reete karvanu che.*/
        }
        printf("\n");
    }
}