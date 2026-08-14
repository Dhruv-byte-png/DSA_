class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<int> mask(n,0);
        vector<int> len(n);

        for(int i=0 ; i<n ; i++){
            int m=0;
            for(char c  : words[i])
                m |= (1<<(c-'a'));

            mask[i] = m;
            len[i] = words[i].size();
        }

        int ans=0;
        for(int i=0 ; i<n ; i++){
            for(int j=i ; j<n ; j++){
                if((mask[i]&mask[j])==0)
                    ans = max(ans,len[i]*len[j]);
            }
        }
        return ans;
    }
};