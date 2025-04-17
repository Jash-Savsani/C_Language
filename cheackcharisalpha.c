#include<stdio.h>
void main()
{
    char ch;
    printf("Enter Your Charater:");
    scanf(" %c",&ch);/*character na format specifier ma ek space pachi %c lakhvu.*/
    ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))?printf("Given Character is Alphabet"):printf("Given Character is not Alphabet");
}
