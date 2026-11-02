#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());

        long long need = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            need += b[i];

            if (need > n)
            {
                break;
            }
            long long score = a[n - need] * (i + 1);
            if (score > ans)
            {
                ans = score;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
