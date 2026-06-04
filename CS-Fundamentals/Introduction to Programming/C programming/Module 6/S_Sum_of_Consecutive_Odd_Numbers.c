#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int start, end;
        if (X < Y)
        {
            start = X;
            end = Y;
        }
        else{
            start = Y;
            end = X;
        }
        int sum = 0;

        for (int i = start + 1; i < end; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    
    return 0;
}