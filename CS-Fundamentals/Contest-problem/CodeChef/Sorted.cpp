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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> sorted_v(v);

        sort(sorted_v.begin(), sorted_v.end());

        bool sorted = true;

        for (int i = 0; i < n; i++)
        {
            if (v[i] != sorted_v[i])
            {
                sorted = false;
                break;
            }
        }

        if (sorted)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}