class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for(int i : nums) str.push_back(to_string(i));

        sort(str.begin(), str.end(), [](const string &a, const string&b) {
            return (b+a) < (a+b);
        });

        if(str[0]=="0") return "0";

        string maxi;
        for(const string &num : str) maxi += num;

        return maxi;
    }
};