class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        res.push_back(nums[0]);
        for(int i=1; i<n-1; i++){
            bool flag = false;
            for(int j=0 ; j<i; j++){
                if(nums[i] <= nums[j]){
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                res.push_back(nums[i]);
                continue;
            }
            flag = false;
            for(int j = i+1; j<n; j++){
                if(nums[i] <= nums[j]){
                    flag = true;
                    break;
                }
            } 
            if (flag == false) res.push_back(nums[i]);
        }
        if(n>1) res.push_back(nums[n-1]);

        return res;
    }
};