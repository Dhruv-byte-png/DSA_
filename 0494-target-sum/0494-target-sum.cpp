class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<int, int> count;
        count[0]= 1;

        for(int i : nums){
            unordered_map<int,int> temp;
            for(const auto& [total,counter] : count){
                temp[total + i] += counter;
                temp[total - i] += counter;
            }
            count = temp;
        }
        return count[target];
    }
};