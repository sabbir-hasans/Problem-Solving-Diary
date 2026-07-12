#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        string A, B;
        cin >> A >> B;

        string ans = "";

        for (int i = 0; i < min(N,M); i++)
        {
            if (A[i] == B[i])
            {
                ans += A[i];
            }
            else
            {
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}