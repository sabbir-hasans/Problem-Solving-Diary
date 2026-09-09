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

        map<int, int> freq;
        for (int i = 0; i < N; i++)
        {
            freq[A[i]]++;
        }

        int ans = 0;
        for (auto it : freq)
        {
            int count = it.second;
            int half = (count + 1) / 2;
            if (half > ans)
            {
                ans = half;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}