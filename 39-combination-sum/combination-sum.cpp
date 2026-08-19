class Solution {

public:
    void findCombination(int idx , int t , vector<int> &arr , vector<vector<int>> &ans , vector<int>&stk){
        if(idx == arr.size()){
            if(t == 0) ans.push_back(stk);
            return;
        }
        if(arr[idx] <= t){
            stk.push_back(arr[idx]);
            findCombination(idx , t-arr[idx] , arr ,ans , stk);
            stk.pop_back();
        }
        findCombination(idx+1 , t , arr , ans , stk);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> stk;
        findCombination(0, target , candidates , ans , stk);
        return ans;
    }
};