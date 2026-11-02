#include <bits/stdc++.h>
using namespace std;

void buildGroups(int n, vector<int> &a, vector<int> &color, vector<int> &len)
{
    color.push_back(0);
    len.push_back(0);

    for (int x : a)
    {
        if (color.back() == x)
            len.back()++;
        else
        {
            color.push_back(x);
            len.push_back(1);
        }
    }
    color.push_back(0);
}

int calculateAnswer(vector<int> &c, vector<int> &len)
{
    int k = c.size() - 2;
    int ans = k;

    for (int i = 1; i <= k; i++)
    {
        for (int j = i + 1; j <= i + 2 && j <= k; j++)
        {
            if (c[i] == c[j])
                continue;

            int left;
            if (len[i] >= 2)
                left = i;
            else
            {
                left = i - 1;
                if (c[i - 1] == c[j])
                    left--;
            }

            int right;
            if (len[j] >= 2)
                right = k - j + 1;
            else
            {
                right = k - j;
                if (c[j + 1] == c[i])
                    right--;
            }

            int total = left + 2 + right;
            if (total > ans)
                ans = total;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), color, len;
        for (int &x : a)
            cin >> x;

        buildGroups(n, a, color, len);
        cout << calculateAnswer(color, len) << '\n';
    }
    return 0;
}
