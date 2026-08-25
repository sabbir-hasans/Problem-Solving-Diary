#include<bits/stdc++.h>
using namespace std;
int main()
{
    int L,R;
    cin >> L >> R;

    for (int  i = L; i <= R; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

        cout << "No" << endl;
    
    return 0;
}

// if (L == R && L % 2 != 0)
// {
//     cout << "No" << endl;
// }
// else
// {
//     cout << "Yes" << endl;
// }