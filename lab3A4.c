#include<stdio.h>
void main()
{
    int i;
    int x[3];
    int y[3];
    int m[3];
    for(i=0;i<3;i++)
    {
        printf("Enter x%d : ",i+1);
        scanf("%d",&x[i]);
        printf("Enter y%d : ",i+1);
        scanf("%d",&y[i]);
    }
    m[0]=(y[1]-y[0])/(x[1]-x[0]);
    m[1]=(y[2]-y[1])/(x[2]-x[1]);
    m[2]=(y[2]-y[0])/(x[2]-x[0]);
    if(m[0]==m[1] && m[0]==m[2] && m[1]&&m[2])
    {
        printf("All the Three Points fall on the Straight Line.");
    }
    else
    {
        printf("All the Three Points not fall on the Straight Line.");
    }
}
