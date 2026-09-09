#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int R, B, G;
        cin >> R >> B >> G;

        int bundles = 0;
        if (R <= B && R <= G)
        {
            bundles = R;
        }
        else if (B <= R && B <= G)
        {
            bundles = B;
        }
        else
        {
            bundles = G; 
        }

        int total = R + B + G;
        int answer = bundles * 10 + (total - 3 * bundles) * 3;

        cout << answer << endl;
    }
    return 0;
}