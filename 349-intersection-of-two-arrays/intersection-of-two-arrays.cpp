class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        unordered_set<int> map;

        for(int i : nums1)
            map.insert(i);

        for(int i : nums2) {
            if(map.find(i) != map.end()) {
                ans.push_back(i);
                map.erase(i);  
            }
        }
        return ans;
    }
};