class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        while(maxi != 0){
            int temp = maxi;
            maxi = mini % maxi;
            mini = temp;
        }
        return mini;
    }
};