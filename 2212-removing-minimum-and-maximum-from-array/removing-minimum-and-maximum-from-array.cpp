class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_val = nums[0];
        int max_val = nums[0];
        int min_idx = 0;
        int max_idx = 0;
        int n = nums.size();

        for(int i=0 ; i < n; i++){
            if(nums[i] < min_val){
                min_val = nums[i];
                min_idx = i;
            }

            if(nums[i] > max_val){
                max_val = nums[i];
                max_idx = i;
            }
        }
        int l = min(min_idx, max_idx);
        int r = max(min_idx, max_idx);

        return min({l+r-l+1,n-1-r+l+2,r-l+n-1-r+1});
    } 
};