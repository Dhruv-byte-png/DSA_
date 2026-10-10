class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map<int , int> map;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 ==0)
                map[nums[i]]++;
        }
        int maxi = INT_MIN;
        int num = -1;
        for(auto i : map){
            if(i.second > maxi || i.second == maxi && i.first < num ){
                maxi = i.second;
                num = i.first;
            }
        }
        return num;
    }
};