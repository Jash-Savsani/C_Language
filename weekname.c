#include<stdio.h>
void main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    switch(a){/*switch ni andar je variable lakhel che te case pachi lakel data type ne eqal hase to exicute thase.*/
        case 1:/*exicute thai gaya baad break vade the switch thi bahar nikli jase. jo variable ek pan case na data type ne...*/
            printf("Monday");/*...eqal nahi hoy to te default na option ne execute karse, default pachi break nahi aave.*/
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wensday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Day Name");
    }
}
