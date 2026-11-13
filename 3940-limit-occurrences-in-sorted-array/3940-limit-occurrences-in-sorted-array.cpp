class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        int s = 1;
        vector<int> ans;
        for(int i=1; i<=n; i++){
            if(i<n and nums[i-1]==nums[i]) s++;
            else{
                int len = min(s,k);
                while(len--) ans.push_back(nums[i-1]);
                s=1;
            }
        }
        return ans;
    }
};