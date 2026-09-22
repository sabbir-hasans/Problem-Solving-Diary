#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int m;
        cin >> m;

        while (m--)
        {
            string s;
            cin >> s;

            if ((int)s.size() != n)
            {
                cout << "NO\n";
                continue;
            }

            unordered_map<long long, char> numToChar;
            unordered_map<char, long long> charToNum;

            bool matches = true;

            for (int i = 0; i < n; i++)
            {
                long long num = a[i];
                char ch = s[i];

                // check number -> character mapping
                if (numToChar.count(num))
                {
                    if (numToChar[num] != ch)
                    {
                        matches = false;
                        break;
                    }
                }
                else
                {
                    numToChar[num] = ch;
                }

                // check character -> number mapping
                if (charToNum.count(ch))
                {
                    if (charToNum[ch] != num)
                    {
                        matches = false;
                        break;
                    }
                }
                else
                {
                    charToNum[ch] = num;
                }
            }

            cout << (matches ? "YES" : "NO") << "\n";
        }
    }

    return 0;
}