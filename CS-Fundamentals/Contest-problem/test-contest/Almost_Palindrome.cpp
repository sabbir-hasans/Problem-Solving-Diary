#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        int freq[26] = {0};

        for (char c : s)
        {
            freq[c - 'a']++;
        }

        int odd = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                odd++;
            }
        }

        if (odd == 0)
            cout << 0 << "\n";
        else
            cout << odd - 1 << "\n";
    }

    return 0;
}