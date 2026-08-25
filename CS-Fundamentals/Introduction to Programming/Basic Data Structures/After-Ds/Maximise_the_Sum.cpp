#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a[5];
        long long int sum = 0;
        long long int mx = LLONG_MIN;

        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
            sum += a[i];

            mx = max(mx, a[i]);
        }
        long long ans = 2*mx - sum;
        cout <<  ans << endl;
    }
    return 0;
}