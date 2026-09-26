class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = 0;
        int answer = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];              // add the new element

            if (i >= k)
                sum -= arr[i - k];      // remove the element that left the window

            if (i >= k - 1)
                answer = max(answer, sum);  // window has k elements, so compare
        }

        return answer;
    }
};