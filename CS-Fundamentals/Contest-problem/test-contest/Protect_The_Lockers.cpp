#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tc;
    cin >> tc;
    while (tc--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int cnt = 0;
        for (int i = l; i <= r; i++)
        {
            if (__gcd(i, k) == 1)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}