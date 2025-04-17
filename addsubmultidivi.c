#include<stdio.h>
void main()
{
    float a,b,c;
    char ch;
    printf("Enter a First Number:");
    scanf("%f",&a);
    printf("Enter a Second Number:");
    scanf("%f",&b);
    printf("Choose Your Arithmetic Operator:");
    scanf(" %c",&ch);
    switch(ch){
        case '+':
            c=a+b;
            printf("Your Answer is:%f",c);
            break;
        case '-':
            c=a-b;
            printf("Your Answer is:%f",c);
            break;
        case '*':
            c=a*b;
            printf("Your Answer is:%f",c);
            break;
        case '/':
            c=a/b;
            printf("Your Answer is:%f",c);
            break;
        default: 
            printf("Invalid Arithmetic Operator.");
    }
}
