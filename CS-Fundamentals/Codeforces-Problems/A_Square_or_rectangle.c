#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int width, height;
        scanf("%d %d", &width, &height);

        if (width == height)
        {
            printf("Square\n");
        }
        else if (width > height || width < height)
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}