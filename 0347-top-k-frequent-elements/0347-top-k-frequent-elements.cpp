class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++) mp[nums[i]]++;

        priority_queue<pair<int,int>>pri_que;
        for(auto i : mp) pri_que.push({i.second,i.first});

        while(k>0){
            ans.push_back(pri_que.top().second);
            pri_que.pop();
            k--;
        }
        return ans;
    }
};