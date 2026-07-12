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

        int A[105];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool ok = false;

        for (int X = 0; X <= K; X++)
        {
            int red = X;
            int blue = K - X;

            bool possible = true;

            for (int i = 0; i < N; i++)
            {
                if (A[i] > 0)
                {
                    red += A[i];
                    blue -= A[i];
                }
                else
                {
                    red += A[i];
                    blue -= A[i];
                }

                if (red < 0 || blue < 0)
                {
                    possible = false;
                    break;
                }
            }

            if (possible)
            {
                ok = true;
                break;
            }
        }

        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}