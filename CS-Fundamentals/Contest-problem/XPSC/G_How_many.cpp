#include<bits/stdc++.h>
using namespace std;
int main()
{
    int S, T;
    cin >> S >> T;

    int total_count = 0;

    // a ber kora 
    for (int a = 0; a <= S; a++)
    {
        // b ber kora
        for (int b = 0; b <= S-a; b++)
        {
            int c;
            // zodi a = 0 b= 0 hoy taile a * b* C = 0 hobe
            //tahole kebol check korbo a+b+c <=s
            if (a == 0 || b == 0)
            {
                c = S-a-b;
            }
            else
            {
                //zodi ai sob na hoy taile c er max possible hobe
                c = min(S-a-b,T/(a*b));
            }
            // c er man hote pare 0 theke c porjonto.
            total_count += c+1;
        }
        
    }
    cout << total_count << endl;
    
    return 0;
}