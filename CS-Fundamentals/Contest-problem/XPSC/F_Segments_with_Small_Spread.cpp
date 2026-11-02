#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);

    for (auto &x : a)
        cin >> x;

    multiset<long long> st;

    long long ans = 0;
    int l = 0;

    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);

        while (*st.rbegin() - *st.begin() > k)
        {
            st.erase(st.find(a[l]));
            l++;
        }
        ans += i - l + 1;
    }
    cout << ans << endl;
    return 0;
}