class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(char x:s){
            if(!st.empty() && x==')' && st.top()=='('){
                st.pop();
            }else{
                st.push(x);
            }
        }
        return st.size();
        
    }
};