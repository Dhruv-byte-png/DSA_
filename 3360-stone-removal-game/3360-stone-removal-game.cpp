class Solution {
public:
    bool canAliceWin(int n) {
        int s = 10;
        bool win = true;
        while(n>=s){
            n -= s;
            s--;
            win = !win;
        }
        return !win;
    }
};