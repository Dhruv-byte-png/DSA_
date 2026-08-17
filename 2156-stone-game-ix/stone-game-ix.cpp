class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int zeroes = 0;
        int ones = 0;
        int towes = 0;
        for(int i=0 ; i<stones.size(); i++){
            int r = stones[i]%3;
            if(r==0) ++zeroes;
            else if(r==1) ++ones;
            else if(r==2) ++towes;
        }

        if(zeroes%2==0) return ones > 0 && towes > 0;
        else return abs(ones - towes) > 2;
    }
};