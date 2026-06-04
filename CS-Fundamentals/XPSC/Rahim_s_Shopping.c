#include<stdio.h>
int main()
{
    //input n,k
    int k,n;
    scanf("%d %d", &n, &k);
    //array input
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //find ans
    int ans = -1;
    //ans update
    for (int i = 0; i < n; i++)
    {
        int cur_val = a[i];
        if (cur_val <= k)
        {
            // Rahim can afford it
            if (ans < cur_val)
            {
                //ans small
                ans = cur_val;
            }
            
        }
        
    }
    //Print ans
    printf("%d", ans);
    return 0;
}