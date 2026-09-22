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
        if (K == N - 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}