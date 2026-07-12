#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int mid = n / 2;
    int median = -1;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] < a[i])
            {
                cnt++;
            }  
        }

        if (cnt == mid)
        {
            median = a[i];
            break;
        }
    }

    int ans = __INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == median)
        {
            if (abs(mid - i) < ans)
            {
                ans = abs(mid - i);
                break;
            }
        }
    }
    printf("%d", ans);
    return 0;
}