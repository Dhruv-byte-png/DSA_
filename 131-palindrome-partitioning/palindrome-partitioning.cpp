class Solution {
public:

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        rec(0, s, path, res);
        return res;
    }

    void rec(int idx, string s, vector<string>& path,
             vector<vector<string>>& res) {
        if(idx == s.size()) {
            res.push_back(path);
            return;
        }

        for(int i = idx; i < s.size(); i++) {
            if(isPal(s, idx, i)) {
                path.push_back(s.substr(idx, i - idx + 1));
                rec(i + 1, s, path, res);
                path.pop_back();
            }
        }
    }

    bool isPal(string s, int str, int end) {
        while(str <= end) {
            if(s[str] != s[end])
                return false;
            str++;
            end--;
        }
        return true;
    }
};