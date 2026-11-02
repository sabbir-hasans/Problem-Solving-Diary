#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin >> n >> s;

    vector<long long> a(n);

    for (auto &x : a)
        cin >> x;

    long long sum = 0, ans = 0;
    int l = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        while (sum > s)
            sum -= a[l++];
        ans += i - l + 1;
    }
    cout << ans << endl;
    return 0;
}