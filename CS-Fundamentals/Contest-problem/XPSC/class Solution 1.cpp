class Solution {
public:
    int search(string &pat, string &txt) {

        int n = txt.size();
        int k = pat.size();
        int ans = 0;

        int freq[26] = {0};

        for (char c : pat)
            freq[c - 'a']++;

        for (int i = 0; i < n; i++) {

            freq[txt[i] - 'a']--;

            if (i >= k)
                freq[txt[i - k] - 'a']++;

            if (i >= k - 1) {

                bool ok = true;

                for (int j = 0; j < 26; j++) {
                    if (freq[j] != 0) {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                    ans++;
            }
        }
        return ans;
    }
};