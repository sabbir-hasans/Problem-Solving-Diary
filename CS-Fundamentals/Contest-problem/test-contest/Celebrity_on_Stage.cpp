#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long myHeight = a[k - 1];
    int interruptMe = 0;
    int iInterrupt = 0;

    for (int i = 0; i < k - 1; i++)
    {
        if (a[i] > myHeight)
        {
            interruptMe++;
        }
    }

    for (int i = k; i < n; i++)
    {
        if (a[i] < myHeight)
        {
            iInterrupt++;
        }
    }

    printf("%d %d\n", interruptMe, iInterrupt);
    return 0;
}