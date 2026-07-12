#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S,X;
        cin >> S >> X;

        while (S.find(X) != string::npos)
        {
            int possition = S.find(X);
            S.replace(possition, X.size(),"#");
        }
        cout << S << endl;
    }
    
    return 0;
}