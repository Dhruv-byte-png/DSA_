class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIndex = min_element(nums.begin(), nums.end())-nums.begin();
        int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin();

        int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        int front = right + 1;
        int end = (nums.size()) - left;
        int both = (left+1) + (nums.size() - right);
        return min({front , end , both});
    } 
};