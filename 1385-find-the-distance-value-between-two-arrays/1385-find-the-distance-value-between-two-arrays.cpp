class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int ans = 0, i =0;
        for(int j : arr1){
            while(i < arr2.size() && arr2[i] < j - d) i++;

            if(i == arr2.size() || arr2[i] > j + d) ans++;
        }
        return ans;
    }
};