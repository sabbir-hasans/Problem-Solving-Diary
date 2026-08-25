#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, P;
        cin >> N >> P;
        string S;
        cin >> S;

        int leftCost = 0;
        int rightCost = 0;
        for (int i = P - 1; i >= 0; i--)
        {
            if (S[i] == 'R')
            {
                leftCost++;
            }
        }
        for (int i = P - 1; i < N; i++)
        {
            if (S[i] == 'L')
            {
                rightCost++;
            }
        }
        cout << min(leftCost, rightCost) << endl;
    }
    return 0;
}