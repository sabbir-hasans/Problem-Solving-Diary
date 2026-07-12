#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int flag = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0)
        {
            flag++;
        }
        
    }
    printf("%d ", flag);
    return 0;
}