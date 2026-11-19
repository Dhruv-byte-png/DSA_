class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int n1 = sequence.size();
        int n2 = word.size();
        int maxi = INT_MIN;
        for(int i=0; i<n1 ; i++){
            int j = i;
            int cnt = 0;
            while(j<n1){
                string s = sequence.substr(j,n2);
                if(s == word){
                    cnt++;
                    j+=n2;
                }
                else{
                    j++;
                    break;
                }
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};