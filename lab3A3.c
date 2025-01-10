#include<stdio.h>
void main()
{
    char i,j;
    printf("Hii, Have Your Marry input 'Y', if Unmarry input 'N':");
    scanf("%c",&i);
    if(i=='Y')
    {
        printf("Congratulations, You has Abile for Driver.");
    }
    else
    {
        printf("Have Your Male input 'M', if Female input 'F':");
        scanf(" %c",&j);
        if(j=='M')
        {
            int age;
            printf("Please Enter Your Age:");
            scanf("%d",&age);
            if(age>30)
            {
                 printf("Congratulations, You has Ablie for Driver.");
            }            
            else
            {
                printf("Sory You has not Ablie for Driver.");
            }
        }
        else
        {
            int age;
            printf("Please Enter Your Age:");
            scanf("%d",&age);
            if(age>25)
            {
                 printf("Congratulations, You has Ablie for Driver.");
            }            
            else
            {
                printf("Sory You has not Ablie for Driver.");
            }
        }
    }
}