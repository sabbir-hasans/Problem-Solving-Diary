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

        int arr[n];
        int ones = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] == 1)
            {
                ones++;
            }
        }

        int ans = n - ones / 2;

        cout << ans << endl;
    }

    return 0;
}