#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int ans1 = max(2*b - 1, a + b);
    int ans2 = max(2*a - 1, ans1);
    cout << ans2 << endl;

    return 0;
}