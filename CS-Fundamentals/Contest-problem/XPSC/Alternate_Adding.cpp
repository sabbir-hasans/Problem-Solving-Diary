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
        ans += abs(A[0]);
        for (int i = 1; i < N; i++)
        {
            ans += abs(A[i] + A[i - 1]);
        }

        ans += abs(A[N - 1]);
        cout << ans / 2 << '\n';
    }

    return 0;
}