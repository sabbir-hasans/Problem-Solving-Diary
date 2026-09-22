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

        unordered_map<int, int> freq;
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            freq[x]++;
            mx = max(mx, freq[x]);
        }

        int other = n - mx;

        if (mx > other)
            cout << mx - other << '\n';
        else
            cout << n % 2 << '\n';
    }

    return 0;
}