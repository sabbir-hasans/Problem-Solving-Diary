#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int &x : a)
        cin >> x;

    for (int &x : b)
        cin >> x;

    map<int, int> count;
    for (int x : a)
        count[x]++;

    long long answer = 0;
    for (int x : b)
    {
        auto it = count.find(x);
        if (it != count.end())
            answer += it->second;
    }

    cout << answer << "\n";
    return 0;
}