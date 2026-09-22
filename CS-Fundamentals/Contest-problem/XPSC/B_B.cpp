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
        for (auto &x : A)
            cin >> x;
        int cnt = 0;
        for (int i = 0; i < N; i++)
            if (A[i] >= A[0])
                cnt++;
        cout << cnt << "\n";
    }
}