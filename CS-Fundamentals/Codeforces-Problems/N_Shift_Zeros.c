#include<stdio.h>
void shiftZeros(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == 0 && a[j] != 0) // zeor swap korbo
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) // array print
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) // array input
    {
        scanf("%d", &a[i]);
    }
    shiftZeros(a,n);
    return 0;
}