class Solution {
public:
    bool isPal(string s, int l, int r){
        while(l<r)
            if(s[l++] != s[r--]) return false;
        return true;
    }

    bool validPalindrome(string s) {
        int st=0;
        int e=s.length()-1;
        while(st<e){
            if(s[st]!=s[e]) return isPal(s, st+1, e) || isPal(s,st,e-1);
            st++;
            e--;
        }
        return true;
    }
};