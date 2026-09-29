class Solution {
public:
    int bound(vector<int>& nums, int target, bool upper) {
        int l = 0, n = nums.size();

        while (l < n) {
            int mid = l + (n - l) / 2;

            if (nums[mid] < target || 
                (upper && nums[mid] == target))
                l = mid + 1;
            else
                n = mid;
        }

        return l;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int start = bound(nums, target, false);

        if (start == nums.size() || nums[start] != target)
            return {-1, -1};

        int end = bound(nums, target, true) - 1;

        return {start, end};
    }
};