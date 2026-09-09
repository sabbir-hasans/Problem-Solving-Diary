#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (N % 2 == 0)
        {
            int ans = (N/2)*30;
            cout << ans << endl;
        }
        else
        {
            int ans2 = (((N-1)/2)*30)+20;
            cout << ans2 << endl;
        } 
    }
    
    return 0;
}