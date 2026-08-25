#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y, P;
        cin >> X >> Y >> P;

        if (X * Y >= P)
        {
            cout << 0 << endl;
            continue;
        }

        for (int k = 1;; k++)
        {
            bool ok = false;

            for (int i = 0; i <= k; i++)
            {
                if ((X + i) * (Y + (k - i)) >= P)
                {
                    ok = true;
                    break;
                }
            }

            if (ok)
            {
                cout << k << endl;
                break;
            }
        }
    }

    return 0;
}