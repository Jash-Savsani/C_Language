#include<stdio.h>
void main()
{
    int a;
    printf("Enter a Month Number:");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("31 DAYS");
            break;
        case 2:
            printf("29 DAYS");
            break;
        case 3:
            printf("31 DAYS");
            break;
        case 4:
            printf("30 DAYS");
            break;
        case 5:
            printf("31 DAYS");
            break;
        case 6:
            printf("30 DAYS");
            break;
        case 7:
            printf("31 DAYS");
            break;
        case 8:
            printf("31 DAYS");
            break;
        case 9:
            printf("30 DAYS");
            break;
        case 10:
            printf("31 DAYS");
            break;
        case 11:
            printf("30 DAYS");
            break;
        case 12:
            printf("31 DAYS");
            break;
        default:
        printf("Invaid Month Number");
    }
}
