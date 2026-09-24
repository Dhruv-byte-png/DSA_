class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow = 0 , fast = 0;
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast)
                break;
        }

        int newslow = 0;
        while(slow != newslow){
            slow = nums[slow];
            newslow = nums[newslow];
        }
        return slow;
    }
};