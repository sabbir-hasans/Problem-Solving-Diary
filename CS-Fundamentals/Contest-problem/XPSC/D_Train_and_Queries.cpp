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
        int n, k;
        cin >> n >> k;

        map<int, int> first;
        map<int, int> last;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (first.find(x) == first.end())
            {
                first[x] = i;
            }

            last[x] = i;
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;

            if (first.find(a) != first.end() &&
                last.find(b) != last.end() &&
                first[a] < last[b])
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}