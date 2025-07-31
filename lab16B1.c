#include<stdio.h>/*haju aadhuro che*/
void main()
{
    int r,c,i,j;
    printf("Enter a row an arrary:");
    scanf("%d",&r);
    printf("Enter a column an arrary:");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter a[i][j]:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
}