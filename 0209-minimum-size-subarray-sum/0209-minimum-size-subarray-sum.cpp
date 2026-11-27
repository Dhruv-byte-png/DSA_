class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int minsize = INT_MAX;
        int sum=0;
        int l = 0;

        for(int r=0; r<n; r++){
            sum += nums[r];
            while(sum >= target){
                minsize = min(minsize, r-l+1);
                sum-= nums[l];
                l++;
            }
        }
        return minsize == INT_MAX ? 0 : minsize;
    }
};