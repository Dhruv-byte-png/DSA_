class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>str;
        for(string &email : emails){
            string checkmail;
            for(char c : email){
                if(c == '+' || c == '@') break;
                if(c == '.') continue;
                checkmail += c;
            }
            checkmail += email.substr(email.find('@'));
            str.insert(checkmail);
        }
        return str.size();
    }
};