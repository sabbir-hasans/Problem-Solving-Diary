#include <bits/stdc++.h>
using namespace std;

int findMaxScore(vector<long long> &a)
{
    int n = a.size(), score = 0;
    int maxLeft = 0, maxCount = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            score++;
        }
    }

    for (int r = 0; r < n; r++)
    {
        int left = 0, right = 0;

        if (r > 0)
        {
            if (a[r - 1] == a[r] + 1)
                left++;
            else if (a[r - 1] == a[r])
                left--;
        }

        maxLeft = max(maxLeft, left);

        if (r < n - 1)
        {
            if (a[r + 1] == a[r] + 1)
                right++;
            else if (a[r] == a[r + 1])
                right--;
        }
        maxCount = max(maxCount, maxLeft + right);
    }
    return score + maxCount;
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
        vector<long long> a(n);

        for (auto &x : a)
            cin >> x;

        cout << findMaxScore(a) << '\n';
    }
    return 0;
}
