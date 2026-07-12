#include<stdio.h>

int distinct()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int isDistinct = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int result = distinct();
    printf("%d", result);
    return 0;
}