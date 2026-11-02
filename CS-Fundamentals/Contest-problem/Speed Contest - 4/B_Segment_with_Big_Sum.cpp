#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0;
    long long sum = 0;
    int ans = -1;

    for (int r = 0; r < n; r++)
    {
        sum += a[r];
        while (sum >= s)
        {
            int length = r - l + 1;
            if (ans == -1 || length < ans)
                ans = length;

            sum -= a[l];
            l++;
        }
    }
    if (ans == -1)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}