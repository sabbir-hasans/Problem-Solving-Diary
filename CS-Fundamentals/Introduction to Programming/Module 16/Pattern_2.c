#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) // line print
    {
        for (int j = 1; j <= space; j++) // space print
        {
            printf(" ");
        }
        for (int k = star; k >= 1; k--) // star print
        {
            printf("%d", k);
        }
        printf("\n");
        star++;
        space--;
    }

    return 0;
}