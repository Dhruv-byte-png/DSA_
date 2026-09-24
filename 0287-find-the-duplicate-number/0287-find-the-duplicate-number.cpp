class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> map;

        for(int i=0; i<nums.size(); i++){
            if(map.find(nums[i]) != map.end()) 
                return nums[i];
                map.insert(nums[i]);
        }
        return -1;
    }
};