class Solution {
public:
    void reverseString(vector<char>& s) {

        int f = 0;
        int e = size(s) -1 ;
        while(f<e){
            int temp = s[f];
            s[f] = s[e];
            s[e] = temp;
            e--;
            f++;
        }
    }
};