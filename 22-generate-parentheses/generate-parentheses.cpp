class Solution {
public:

    void stk(string op, int o, int c, vector<string> &ans){
        if(o == 0 && c == 0){
            ans.push_back(op);
            return;
        }

        if(o == c){
            string op1 = op;
            op1.push_back('(');
            stk(op1 ,o-1 ,c ,ans );
        }

        else if(o == 0){
            string op1 =op;
            op1.push_back(')');
            stk(op1, o, c-1,ans);
        }

        else if(c == 0){
            string op1 =op;
            op1.push_back('(');
            stk(op1, o-1, c, ans);
        }

        else{
            string op1 = op;
            string op2 = op;
            op1.push_back('(');
            op2.push_back(')');
            stk(op1,o-1 , c , ans);
            stk(op2,o, c-1, ans);
        }

    }

    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> ans;
        string op ="";
        stk(op,open,close,ans);
        return ans;
    }
};