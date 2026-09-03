class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        
        for(auto i:nums) mp[i]++;

        vector<pair<int,int>>mpp;
        for(auto i : mp) mpp.push_back({i.first,i.second});

        sort(mpp.begin(),mpp.end(),[](auto &x , auto &y){
            return x.second > y.second;
        });

        for(int i=0; i<k ; i++){
            ans.push_back(mpp[i].first);
        }
        return ans;
    }
};