class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int , int > map;

        for(int i=0; i< nums.size(); i++) map[nums[i]]++;

        vector<int> maj_element;
        int maxim = nums.size() / 3;

        for(auto maxi : map){
            int element = maxi.first;
            int freq = maxi.second;

            if(freq > maxim) maj_element.push_back(element);
        }
        return maj_element;
    }
};