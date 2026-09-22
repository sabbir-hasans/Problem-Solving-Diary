#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    vector<int> money(500005);
    set<int> order;           
    set<pair<int, int>> vals;

    int n = 0;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int m;
            cin >> m;
            n++;
            money[n] = m;
            order.insert(n);
            vals.insert({-m, n});
        }
        else if (type == 2)
        {
            int id = *order.begin();
            order.erase(order.begin());
            vals.erase({-money[id], id});
            cout << id << "\n";
        }
        else
        {
            auto it = vals.begin();
            int id = it->second;
            vals.erase(it);
            order.erase(id);
            cout << id << "\n";
        }
    }

    return 0;
}