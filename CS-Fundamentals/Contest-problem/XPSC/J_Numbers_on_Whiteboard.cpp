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

        cout << 2 << endl;

        int x = n;

        for (int i = n - 1; i >= 1; i--)
        {
            cout << x << " " << i << endl;

            x = (x + i + 1) / 2;
        }
    }

    return 0;
}