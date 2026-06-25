class Solution {
public:
    string decodeString(string s) {
        stack<char> st;

        for(char x : s){

            if(x != ']'){
                st.push(x);
            }

            else{

                string jel = "";

                // collect characters until '['
                while(!st.empty() && st.top() != '['){
                    jel.push_back(st.top());
                    st.pop();
                }

                reverse(jel.begin(), jel.end());

                // remove '['
                st.pop();

                // collect number
                string num = "";

                while(!st.empty() && isdigit(st.top())){
                    num.push_back(st.top());
                    st.pop();
                }

                reverse(num.begin(), num.end());

                int repeat = stoi(num);

                // push decoded string back
                for(int i=0;i<repeat;i++){
                    for(char c : jel){
                        st.push(c);
                    }
                }
            }
        }

        string res = "";

        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};