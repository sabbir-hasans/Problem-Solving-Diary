#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B, P, Q, R;
        cin >> A >> B >> P >> Q >> R;

        int ans = INT_MAX;
        for (int i = 0; i <= min(A, B); i++)
        {
            int totalCost = (((A - i) + 1) / 2) * P + (((B - i) + 1) / 2) * Q + i * R;
            ans = min(ans, totalCost);
        }
        cout << ans << endl;
    }
    return 0;
}