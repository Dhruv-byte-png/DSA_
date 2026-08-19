class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>stk;
        stk.push(-1);
        int max_len = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') stk.push(i);
            else{
                stk.pop();
                if(!stk.empty()){
                    max_len = max(max_len,i-stk.top());
                }
                else stk.push(i);
            }
        }
        return max_len;
    }
};