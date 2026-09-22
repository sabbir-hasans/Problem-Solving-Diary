#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        int a[101] = {0};
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            a[x] = 1;
        }

        int ans = 0;
        for (int i = 1; i <= M; i++)
        {
            if (a[i] == 0)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}