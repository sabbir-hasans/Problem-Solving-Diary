#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        long long sum = 0;
        long long mx = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            sum += x;
            mx = max(mx,x);

            if (sum - mx <= k)  
            {
                ans = i + 1;
            }
            
        }
        cout << ans <<endl;
    }
    
    return 0;
}