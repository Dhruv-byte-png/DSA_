class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int sum = INT_MAX;
        for(int i=0; i < n; i++){
            int ans = 0;
            for(int j=i ; j<n;j++){
                ans += nums[j];
                int len = j-i+1;
                if(len >= l && len <= r && ans >0) sum= min(sum, ans);
            }
        }
        return sum == INT_MAX ? -1 : sum;
    }
};