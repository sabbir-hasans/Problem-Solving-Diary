#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size(); 
        int new_size = n + 1; 

        vector<string> candidates;
        vector<int> times;

        for (int i = 0; i <= n; i++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                string n_s = s;
                n_s.insert(i, 1, c);

                int time = 2;
                for (int i = 1; i < new_size; i++)
                    time += (n_s[i] == n_s[i - 1]) ? 1 : 2;

                candidates.push_back(n_s);
                times.push_back(time);
            }
        }

        int idx = max_element(times.begin(), times.end()) - times.begin();
        cout << candidates[idx] << "\n";
    }
}