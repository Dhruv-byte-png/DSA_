class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[0] = -1;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(map.find(sum%k) != map.end()){
                if(i - map[sum%k] >= 2)
                    return true;
            }
            else
                map[sum%k] = i;
        }
        return false;
    }
};