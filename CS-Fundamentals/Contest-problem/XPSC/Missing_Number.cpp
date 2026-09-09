#include<bits/stdc++.h>
using namespace std;
int main()
{
    int S;
    cin >> S;

    int n = 4;
    int sum = (n*(n+1))/2;
    int ans = sum - S;
    cout << ans << endl;
    return 0;
}