class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        map<string , int> str;
        str[list1[0]] = INT_MIN;
        for(int i= 1 ; i< list1.size(); i++)
            str[list1[i]] = -i; 

        if(!str.contains(list2[0]))
            str[list2[0]]= INT_MIN;

        else{
            if(str[list2[0]] != INT_MIN)
                str[list2[0]] = abs(str[list2[0]]);
            else
                str[list2[0]] = 0;
        }

        for(int i=1 ; i < list2.size(); i++){
            if(str.contains(list2[i])){
                if(str[list2[i]] != INT_MIN)
                    str[list2[i]] = abs(str[list2[i]]) + i;
                else str[list2[i]] = i;
            }
            else str[list2[i]] = -i;
        }

        int min_Val = INT_MAX;
        vector<string> ans;

        for(auto& i : str){
            if(i.second >=0 && i.second < min_Val)
                min_Val = i.second;
        }
        for(auto& i : str){
            if(i.second >=0 && i.second <= min_Val)
                ans.push_back(i.first);
        }
        return ans;
    }
};