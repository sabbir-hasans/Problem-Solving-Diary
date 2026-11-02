#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> st;
        vector<int> D_print(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
            {
                st.push_back(i);
            }
            else if (s[i - 1] == '2')
            {
                if (!st.empty())
                {
                    D_print[st.back()] = 1;
                    st.pop_back();
                }
                else
                {
                    D_print[i] = 1;
                }
            }
            else
            {
                D_print[i] = 1;
            }
        }

        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (!D_print[i])
            {
                ans.push_back(i);
            }
        }

        cout << ans.size() << endl;
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}