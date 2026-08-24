class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        if(nums.empty())return{};
        vector<int> dub;
        unordered_map<int , int> check;

        for(int num : nums){
            check[num]++;
        }
        for(auto i : check)
            if(i.second==2)
                dub.push_back(i.first);
        return dub;
    }
};