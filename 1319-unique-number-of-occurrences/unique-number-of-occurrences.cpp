class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> num;
        for(auto i : arr){
            num[i]++;
        }

        unordered_set<int> c;
        for(auto i : num) c.insert(i.second);
        
        return num.size()==c.size();
    }
};