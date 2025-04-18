#include<stdio.h>
void main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    (a%2==0)?printf("Given Number is EvenNumber"):printf("Given Number is OddNumber");/*ternary operator na end ma semicolon aavse.*/
}
