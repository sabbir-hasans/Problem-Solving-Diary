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

        long long ans = 0;
        long long last = A[0];

        for (int i = 1; i < N; i++)
        {
            if (A[i] < last)
            {
                ans += last - A[i];
            }

            last = max(last, A[i]);
        }

        cout << ans << endl;
    }

    return 0;
}