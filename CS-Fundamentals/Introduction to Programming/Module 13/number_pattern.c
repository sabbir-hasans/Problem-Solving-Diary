#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) // line print
    {
        for (int j = 1; j <= space; j++) // space print
        {
            printf(" ");
        }
        for (int k = 1; k <= val; k++) // star value
        {
            printf("%d ", k);
        }
        printf("\n");
        val++;
        space--;
    }

    return 0;
}