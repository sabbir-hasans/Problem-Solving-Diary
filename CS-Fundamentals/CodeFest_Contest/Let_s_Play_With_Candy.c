#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int not_present_in_the_box = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == not_present_in_the_box)
        {
            not_present_in_the_box++;
        }
    }

    printf("%d\n", not_present_in_the_box);
    return 0;
}