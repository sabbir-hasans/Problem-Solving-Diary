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

        int A[105];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int ans = 0;

        for (int i = 0; i < N - 1; i++)
        {
            ans = max(ans, min(A[i], A[i + 1]));
        }

        cout << ans << endl;
    }

    return 0;
}