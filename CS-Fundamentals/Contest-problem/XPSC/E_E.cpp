#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int even = 0;

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;

            if (x % 2 != 0)
            {
                even++;
            }
        }

        if (even == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}