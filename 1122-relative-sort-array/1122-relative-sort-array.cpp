class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> res;
    map<int,int> freq;
    for(int i=0; i<arr1.size(); i++) freq[arr1[i]]++;
    for(int i=0; i<arr2.size(); i++){
        int num = arr2[i];
        auto pair = freq.find(num);
        for(int j=0; j<pair->second; j++) res.push_back(num);
        freq.erase(pair);
    }

    for(auto& i:freq){
        for(int j=0; j < i.second; j++) res.push_back(i.first);
    }
    return res;
    }
};