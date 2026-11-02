#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (r / l >= 2)
            cout << l << " " << 2 * l << '\n';
        else
            cout << "-1 -1\n";
    }
    return 0;
}
