#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO\n";
        }
        else
        {
            long long x = a;
            long long y = a * b;
            long long z = a * (b + 1);

            cout << "YES\n";
            cout << x << " " << y << " " << z << '\n';
        }
    }
    return 0;
}