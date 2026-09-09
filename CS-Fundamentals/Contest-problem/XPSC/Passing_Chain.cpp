#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int N,K;
        cin >> N >> K;

        int Player = 1;
        for (int i = 1; i < N; i++)
        {
            if (Player + K <= N)
            {
                Player += K;
            }
            else
            {
                break;
            }
        }
        cout << Player << endl;
    }
    return 0;
}