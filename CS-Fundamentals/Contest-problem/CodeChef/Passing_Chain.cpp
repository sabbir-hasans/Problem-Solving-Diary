#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N,K;
        cin >> N >> K;

        int current = 1;

        while (current + K <= N)
        {
            current += K;
        }
        cout << current << endl;
    }
    
    return 0;
}