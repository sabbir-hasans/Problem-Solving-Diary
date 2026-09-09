#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N, M;
        cin >> N >> M;

        bool inNtoM = (M >= N && M <= 3 * N);

        bool isEven = ((M - N) % 2 == 0);

        if (inNtoM && isEven)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}