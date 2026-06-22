class Solution {
public:
string build(string str){
        stack<char>st;
        for(char c:str){
            if(c=='#'){
                if(!st.empty()){
                    st.pop();
                }
                }else{
                    st.push(c);
                }
            
        }
            string res=" ";
            while(!st.empty()){
                res+=st.top();
                st.pop();
            }
            reverse(res.begin(),res.end());
            return res;
        }
    
    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
    }
};