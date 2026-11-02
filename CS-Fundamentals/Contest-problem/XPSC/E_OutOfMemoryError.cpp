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
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> a(n);
        vector<long long> add(n, 0);
        vector<int> last(n, 0);

        for (auto &x : a)
            cin >> x;

        int crash = 0;

        for (int i = 0; i < m; i++)
        {
            int b;
            long long c;
            cin >> b >> c;
            b--;

            if (last[b] != crash)
            {
                add[b] = 0;
                last[b] = crash;
            }

            if (a[b] + add[b] + c > h)
            {
                crash++;
            }
            else
            {
                add[b] += c;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (last[i] == crash)
            {
                a[i] += add[i];
            }

            if (i > 0)
            {
                cout << ' ';
            }
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}


