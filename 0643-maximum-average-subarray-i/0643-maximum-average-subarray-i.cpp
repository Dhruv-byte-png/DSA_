class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i=0; i<k; i++) sum += nums[i];

        double max_sum = sum/(double)k;
        int l=0, h=k-1;
        while(h<nums.size()){
            max_sum=max(max_sum,sum/(double)k);
            l++;
            h++;
            sum -= nums[l-1];
            if(h==nums.size()) break;
            sum+=nums[h];
        }
    return max_sum;
    }
};