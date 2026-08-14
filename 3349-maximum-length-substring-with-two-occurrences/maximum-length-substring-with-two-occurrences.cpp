class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n= s.size();
        int idx = 0;
        unordered_map<char,int> charset;
        int left = 0;
        for(int right = 0 ; right < n ; right++){
            charset[s[right]]++;
            while(charset[s[right]]>2){
                charset[s[left]]--;
                left++;
            }
            idx = max(idx, right - left + 1);
        }
        return idx;
    }
};