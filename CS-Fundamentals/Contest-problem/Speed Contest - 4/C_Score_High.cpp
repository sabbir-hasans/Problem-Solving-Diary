#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            if (x > ans)
                ans = x;
        }
        cout << ans << endl;
    }
    return 0;
}