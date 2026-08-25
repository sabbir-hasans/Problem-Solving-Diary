#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        long long K;
        cin >> N >> K;

        vector<long long> A(N);

        for (int i = 0; i < N; i++)
            cin >> A[i];

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - 1; j++)
            {
                if (A[j] > A[j + 1] &&
                    A[j] + A[j + 1] <= K)
                {
                    swap(A[j], A[j + 1]);
                }
            }
        }

        for (int x : A)
            cout << x << " ";

        cout << '\n';
    }
}