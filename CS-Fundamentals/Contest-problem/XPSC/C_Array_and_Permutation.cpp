#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n), a(n), pos(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            pos[p[i]] = i;
        }

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int last = -1;
        bool ok = true;

        for (int i = 0; i < n;)
        {
            int j = i;

            while (j < n && a[j] == a[i])
                j++;

            if (pos[a[i]] <= last)
            {
                ok = false;
                break;
            }

            last = pos[a[i]];
            i = j;
        }
        cout << (ok ? "YES" : "NO");
    }
    return 0;
}