class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3, 0);

        for (int num : nums) {
            vector<int> prev = dp; 
            for (int cur : prev) {
                int s = cur + num;
                dp[s % 3] = max(dp[s % 3], s);
            }
        }
        return dp[0];
    }
};