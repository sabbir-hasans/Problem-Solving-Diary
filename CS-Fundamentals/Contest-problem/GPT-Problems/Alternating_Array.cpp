#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        int change1 = 0; 
        int change2 = 0;

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;

            if (i % 2 == 0)
            {
                if (x % 2 == 0)
                    change1++;
            }
            else
            {
                if (x % 2 != 0)
                    change1++;
            }
            if (i % 2 == 0)
            { 
                if (x % 2 != 0)
                    change2++;
            }
            else
            {
                if (x % 2 == 0)
                    change2++;
            }
        }
        cout << min(change1, change2) << endl;
    }
    return 0;
}