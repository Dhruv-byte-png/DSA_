class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        int freq[26] = {0};

        for(int i=0 ; i<s.length() ; i++){
            freq[s[i]-'a'] +=1;
            freq[t[i]-'a'] -=1;
        }

        for(int check : freq)
            if (check != 0) return false;
        
        return true;

    }
};