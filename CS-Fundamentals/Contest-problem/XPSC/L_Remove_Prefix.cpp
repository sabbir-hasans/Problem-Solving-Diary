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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<bool> used(n + 1, false);

        int ans = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (used[a[i]])
            {
                ans = i + 1;
                break;
            }

            used[a[i]] = true;
        }

        cout << ans << '\n';
    }

    return 0;
}