#include <bits/stdc++.h>
using namespace std;

bool possible(int len, const vector<long long> &a, long long s)
{
    if (len == 0)
        return true;

    long long sum = 0;

    for (int i = 0; i < len; i++)
        sum += a[i];

    if (sum <= s)
        return true;

    for (int r = len; r < a.size(); r++)
    {
        sum = sum + a[r] - a[r - len];
        if (sum <= s)
            return true;
    }
    return false;
}

int main()
{
    int n;
    long long s;

    cin >> n >> s;

    vector<long long> a(n);

    for (auto &x : a)
        cin >> x;

    int low = 0;
    int high = n;
    int ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (possible(mid, a, s))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}