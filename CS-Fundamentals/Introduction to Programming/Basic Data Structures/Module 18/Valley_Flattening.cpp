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

        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool change = true;

        while (change)
        {
            change = false;

            vector<int> B = A;

            for (int i = 1; i < N - 1; i++)
            {
                if (A[i] < A[i - 1] && A[i] < A[i + 1])
                {
                    B[i - 1] = min(B[i - 1], A[i]);
                    B[i + 1] = min(B[i + 1], A[i]);

                    change = true;
                }
            }

            A = B;
        }

        long long ans = 0;

        for (int x : A)
        {
            ans += x;
        }

        cout << ans << endl;
    }

    return 0;
}