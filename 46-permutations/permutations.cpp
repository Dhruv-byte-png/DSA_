class Solution {

public:
    void backtrack(vector<int> & nums , vector<vector<int>>& res , int first ){
        if(first == nums.size()){
            res.push_back(nums);
            return ;
        }
        for(int i=first ; i<nums.size(); ++i){
            swap(nums[first] , nums[i]);
            backtrack(nums , res , first+1);
            swap(nums[first] , nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(nums,res,0);
        return res;
    }
};