#include <bits/stdc++.h>
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

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> h(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];

        int l = 0;
        int sum = 0;
        int ans = 0;

        for (int r = 0; r < n; r++)
        {
            if (r > 0 && h[r - 1] % h[r] != 0)
            {
                l = r;
                sum = 0;
            }

            sum += a[r];
            while (sum > k)
            {
                sum -= a[l];
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        cout << ans << endl;
    }
    return 0;
}