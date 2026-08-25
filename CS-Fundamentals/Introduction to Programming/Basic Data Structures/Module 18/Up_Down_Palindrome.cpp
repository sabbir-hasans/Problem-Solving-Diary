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

        vector<long long> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        long long L = 0;
        long long R = 1e18;

        bool ok = true;

        for (int i = 0; i < N / 2; i++)
        {
            long long a = A[i];
            long long b = A[N - 1 - i];

            if (a == b)
                continue;

            if (abs(a - b) != 2)
            {
                ok = false;
                break;
            }

            if (a < b)
            {
                L = max(L, a);
                R = min(R, b - 1);
            }
            else
            {
                L = max(L, b);
                R = min(R, a - 1);
            }
        }

        if (ok && L <= R)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}