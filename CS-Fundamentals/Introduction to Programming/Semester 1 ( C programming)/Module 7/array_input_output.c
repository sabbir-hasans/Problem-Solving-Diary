#include<stdio.h>
int main()
{
    int arr[5];
    // scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    // printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
    
    for (int i = 0; i <= 4; i++)
    {
        // printf("arr[%d]\n", i); // hubohu array print hobe

        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}