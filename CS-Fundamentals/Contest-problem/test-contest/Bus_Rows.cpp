#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,x;
        cin >> n >> m >> x;
        int row_number = (x + m - 1)/ m;
        int ans = min(row_number, n - row_number + 1);
        cout << ans << "\n";
    }
    
    return 0;
}