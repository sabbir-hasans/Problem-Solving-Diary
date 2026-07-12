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
        unordered_map<int, int> cnt;
        unordered_map<int, long long> cost;

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            int x = A[i];
            int ops = 0;
            while (true)
            {
                cnt[x]++;
                cost[x] += ops;
                if (x == 0)
                    break;

                x /= 2;
                ops++;
            }
        }

        long long ans = LLONG_MAX;
        for (auto &p : cnt)
        {
            int value = p.first;
            if (cnt[value] == N)
            {
                ans = min(ans, cost[value]);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}