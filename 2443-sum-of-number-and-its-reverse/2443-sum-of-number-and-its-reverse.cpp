class Solution {
public:

    int revInt(int x){
        int rev= 0;
        while(x>0){
            rev = rev*10+(x%10);
            x/=10;
        }
        return rev;
    }

    bool sumOfNumberAndReverse(int num) {
        for(int i=0 ; i <= num; i++){
            if((i+revInt(i))==num) return true;
        }
        return false;
    }
};