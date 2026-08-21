class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 0;
        int high = num;
        unsigned mid;
        while(low <= high){
            mid = low + (high - low)/2;

            if((long long)mid*mid > num) high = mid-1;

            else if((long long)mid*mid < num) low = mid+1;

            else return true;
        }
        return false;
    }
};