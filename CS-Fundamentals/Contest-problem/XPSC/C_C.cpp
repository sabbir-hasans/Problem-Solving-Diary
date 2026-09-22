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
        if (N == 1)
            cout << 200 << "\n";
        else
            cout << 100 * N << "\n";
    }
    return 0;
}