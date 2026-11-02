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

        int a[100];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        int mn = a[0];
        int secondMn = a[1];
        int mx = a[n - 1];
        int secondMx = a[n - 2];

        int x = mx - secondMn;
        int y = secondMx - mn;

        cout << min(x, y) << "\n";
    }
    return 0;
}