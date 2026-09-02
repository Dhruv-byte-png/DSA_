class Solution {
public:
    int countDigits(int num) {
        int x = num;
        int cnt = 0;
        while(x>0){
            int temp = x%10;
            if(temp != 0 && num%temp == 0) cnt++;

            x/=10;
        }
        return cnt;
    }
};