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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long answer = 0;

        for (int s = 0; s < 2; s++)
        {
            long long d = 0;

            for (int i = s; i < n; i += 2)
            {
                d = gcd(d, a[i]);
            }

            bool valid = true;

            for (int j = 1 - s; j < n; j += 2)
            {
                if (a[j] % d == 0)
                {
                    valid = false;
                    break;
                }
            }

            if (valid)
            {
                answer = d;
                break;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}
