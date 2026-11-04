class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int sum = 0, minsum = 0, maxsum = 0;
        int ans = 0;

        for(int i : nums){
            sum += i;
            ans = max(ans, abs(sum - minsum));
            ans = max(ans, abs(sum - maxsum));
            minsum = min(minsum, sum);
            maxsum = max(maxsum, sum);
        }
        return ans;
    }
};