#include <stdio.h>
int main()
{
    //n input
    int n;
    scanf("%d", &n);
    int a[n]; // array input
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    int k; // k input
    scanf("%d", &k);

    int flag = 0;
    // search k
    for (int i = 0; i < n; ++i)
    {
        int val = a[i];
        if (val == k)
        {
            flag = 1; // k array te  present
            break;
        }
    }

    if (flag == 1)
    {
        //K present
        printf("-1\n");
    }
    else
    {
        //k missing
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            //dekhbo i missing ki ba
            //  missing hoile ans bar be
            int present = 0;
            //search i
            for (int j = 0; j < n; ++j)
            {
                int val = a[j];
                if (val == i)
                {
                    present = 1; // i array te present aaseche
                    break;
                }
            }
            if (present == 0)
            {
                count++; // i aray te nai
            }
            
        }
        printf("%d\n", count);
    }

    return 0;
}