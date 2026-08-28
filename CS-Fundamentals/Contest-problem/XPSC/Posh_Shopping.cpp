#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int a[105]; // item input
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        //single item
        int oneItem = 0;
        for (int i = 0; i < n; i++)
        {
            oneItem = max(oneItem,a[i]);
        }

        //pair item
        int pair = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(a[i] <= a[j])
                {
                    pair = max(pair, a[i] + a[j]);
                }
            }
        }
        int ans = max(oneItem, pair);
        cout << ans << endl;
    }
    
    return 0;
}