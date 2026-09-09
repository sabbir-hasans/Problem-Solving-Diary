#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        string A, B;
        cin >> N >> A >> B;

        int countA = count(A.begin(), A.end(), 'a');
        int countB = count(B.begin(), B.end(), 'a');

        if (countA + countB == N)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}