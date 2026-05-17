#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // upper pyramid
    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++) // print line
    {
        // print space
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        // print symbol
        for (int j = 1; j <= star; j++)
        {
            if (i % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        star += 2;
        space--;
    }

    // lower pyramid
    int star2 = 2 * n - 3;
    int space2 = 1;

    for (int i = n - 1; i >= 1; i--) // print line
    {
        // print space
        for (int k = 1; k <= space2; k++)
        {
            printf(" ");
        }
        // print symbol
        for (int j = 1; j <= star2; j++)
        {
            if (i % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        star2 -= 2;
        space2++;
    }
    return 0;
}