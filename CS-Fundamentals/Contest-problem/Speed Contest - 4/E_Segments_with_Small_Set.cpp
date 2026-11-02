#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int a[100005];
    for (int j = 0; j < n; j++)
        cin >> a[j];

    int freq[100005] = {0}; 
    int l = 0;              
    int total = 0;          
    long long ans = 0;

    for (int i = 0; i < n; i++) 
    {
        freq[a[i]]++;
        if (freq[a[i]] == 1)
            total++;

        while (total > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
                total--;
            l++;
        }

        ans += i - l + 1;
    }
    cout << ans << endl;
    return 0;
}