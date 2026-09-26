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

        vector<long long> a(n + 1);
        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        int firstNegative = 0;
        for (int i = 1; i <= n; i++)
        {
            if (prefix[i] < 0)
            {
                firstNegative = i;
                break;
            }
        }

        if (firstNegative == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        long long minAfter = LLONG_MAX;
        bool possible = false;
        for (int i = n; i >= 1; i--)
        {
            if (i <= firstNegative)
            {
                if (a[i] <= minAfter)
                {
                    possible = true;
                    break;
                }
            }
            minAfter = min(minAfter, prefix[i]);
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}