class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int l2 = 0;
        int s2 = 0;
        int l1 = INT_MIN;
        int s1 = INT_MAX;

        for(int num : nums){
            if(num > l1){
                l2 = l1;
                l1 = num;
            }
            else l2 = max(l2 , num);

            if(num < s1){
                s2 = s1;
                s1 = num;
            }
            else s2 = min(s2, num);
        }
        return (l1 * l2) - (s1 * s2);
    }
};