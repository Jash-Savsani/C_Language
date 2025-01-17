/*    1
      0 1
      1 0 1
      0 1 0 1....

*/
#include <stdio.h>
void main()
{
    int n, a;
    printf("enter number n:");
    scanf("%d", &n);
    int i,j;
    for( i=1;i<=n;i++)
    {
        if (i % 2 != 0)
            a = 1;
        else
            a = 0;
        for ( j = 1; j <= i; j++)
        {
            printf("%d ", a);
            if (a == 0)
                a = 1;
            else
                a = 0;
        }
        printf("\n");
    }
    printf("\n\n\n");
    // with maths.

    for (i = 1; i <= n; i++)
    {

        for ( j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\n\n");
    // reverse print
    for ( i = 1; i <= n; i++)
    {

        for ( j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    
}
