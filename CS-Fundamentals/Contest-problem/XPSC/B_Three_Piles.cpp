#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long diff = abs(a - b);
        long long answer;

        if (a >= b)
        {
            answer = diff + c;
        }
        else
        {
            if (c <= diff)
                answer = diff;
            else
                answer = c - diff;
        }

        cout << answer << endl;
    }

    return 0;
}