class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> arr;

        int targetIndex = 0;

        for(int i=1; i <= n; i++){
            if(targetIndex == target.size()) break;

            if(target[targetIndex] == i){
                arr.push_back("Push");
                targetIndex++;
            }

            else{
                arr.push_back("Push");
                arr.push_back("Pop");
            }
        }
        return arr;
    }
};