#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    // upper pyramid
    int line = 6 + (n / 2); // here upper pyramid line calculation, for n = 1 total lines will be 6
    int star = 1;
    int space = line - 1;

    for (int i = 1; i <= line; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    //tree print
    int tree = (star - 2 - n) / 2; //here calculate space before tree
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= tree; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}