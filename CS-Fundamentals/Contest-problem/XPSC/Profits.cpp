#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

while (t--)
{
    int n,x;
    cin >> n >> x;

    int a = 0;
    if (n > x)
        a = n - x;

    int profit = (a*(n-x+1))/2;
    cout << profit << endl;
}
    return 0;
}