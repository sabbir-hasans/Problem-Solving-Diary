#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<pair<long long, int>> &a, int left, int right, long long need)
{
    if (left > right)
        return -1;
    int mid = (left + right) / 2;

    if (a[mid].first == need)
        return mid;

    if (a[mid].first < need)
        return binarySearch(a, mid + 1, right, need);
    return binarySearch(a, left, mid - 1, need);
}

int main()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long need = x - a[i].first - a[j].first;
            int k = binarySearch(a, j + 1, n - 1, need);
            if (k != -1)
            {
                vector<int> ans = {
                    a[i].second,
                    a[j].second,
                    a[k].second};
                sort(ans.begin(), ans.end());

                cout << ans[0] << " "
                     << ans[1] << " "
                     << ans[2] << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}