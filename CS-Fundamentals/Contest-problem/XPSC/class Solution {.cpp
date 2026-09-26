class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {

        int n = arr.size();

        vector<int> ans;
        queue<int> q;

        int left = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                q.push(i);
            }
            if (i >= k - 1)
            {
                while (!q.empty() && q.front() < left)
                {
                    q.pop();
                }

                if (q.empty())
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(arr[q.front()]);
                }
                left++;
            }
        }
        return ans;
    }
};