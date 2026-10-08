class Solution {
public:
    string removeOuterParentheses(string s) {
        int bal =0 ;
        int i=0;
        for(char c:s){
            bal += 1-((c-'(')<<1);
            s[i]=c;
            i+=!(bal+c-'('==1);
        }
        s.resize(i);
        return s;
    }
};