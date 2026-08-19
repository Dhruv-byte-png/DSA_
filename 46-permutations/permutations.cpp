class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() == 1){
            vector<int> l1;
            l1.push_back(nums[0]);
            res.push_back(l1);
            return res;
        }
        for(int i=0 ; i<nums.size() ; i++){
            int n = nums[i];
            vector<int> rem_nums;
            for(int j=0; j<nums.size(); j++){
                if(j!=i) rem_nums.push_back(nums[j]);
            }

            vector<vector<int>> permu = permute(rem_nums);
            for(vector<int> i : permu){
                i.insert(i.begin(), n);
                res.push_back(i);
            }
        }
        return res;
    }
};