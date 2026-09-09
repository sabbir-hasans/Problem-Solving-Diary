#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N,X,Y;
        cin >> N >> X >> Y;

        if (N <= 3)
        {
            int cost = X * N;
            cout << cost << endl;
        }
        else
        {
            int remainingMonth = N - 3;
            int cost2 = X * 3;
            int cost3 = Y * remainingMonth;
            int totalCost = cost2 + cost3;
            cout << totalCost << endl;
        }
    }
    return 0;
}