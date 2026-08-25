#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++; 
            }
        }

        int pair = 0;
        for (int i = 0; i < odd && i < even; i++)
        {
            pair++;
        }
        
        int ans = pair * 2;

        if (odd != even)
        {
            ans++;
        }
        cout << ans << endl;
        
    }
    
    return 0;
}