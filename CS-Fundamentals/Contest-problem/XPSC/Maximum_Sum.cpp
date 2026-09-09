#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int prefix[N + 1];
        prefix[0] = 0;
        for (int i = 0; i < N; i++)
        {
            prefix[i + 1] = prefix[i] + A[i];
        }

        int ans = 0;
        for (int i = 0; i <= K; i++)
        {
            int fst = i;
            int lst = N - (K - i);

            int sum = prefix[lst] - prefix[fst];
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}