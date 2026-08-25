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

        string S;
        cin >> S;

        bool found = false;

        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'z')
            {
                found = true;

                while (i < N && S[i] == 'z')
                {
                    S[i] = 'a';
                    i++;
                }

                break;
            }
        }

        cout << S << endl;
    }

    return 0;
}