class Solution {
public:
        int numIdenticalPairs(vector<int>& A) {
        int ans = 0;
        unordered_map<int, int> map;
        for (int i: A) ans += map[i]++;

        return ans;
    }
};