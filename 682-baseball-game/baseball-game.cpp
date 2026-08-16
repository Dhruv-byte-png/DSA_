class Solution {
public:
    int calPoints(vector<string>& operations) {
        int v1 , v2;
        int ans=0;
        stack<int> stk;

        for(string i : operations){

            if(i=="C")
                stk.pop();
            else if(i == "D")
                stk.push(stk.top()*2);
            else if(i == "+"){
                v1 = stk.top();
                stk.pop();
                v2 = stk.top();
                stk.push(v1);
                stk.push(v1 + v2);
            }
            else
                stk.push(stoi(i));
        }

        while(stk.size() != 0){
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};