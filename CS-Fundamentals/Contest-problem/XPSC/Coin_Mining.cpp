#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        int ans = -1;

        for (int i = 1; i <= 100 && ans == -1; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                int buy = Y * j * (j + 1) * (2 * j + 1) / 6;
                int cost = X * j;
                int coast = Y * j * j * (i - j);
                int profit = buy - cost + coast;

                if (profit > 0)
                {
                    ans = i;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}