class Solution {
public:
    int minAddToMakeValid(string s) {
        int r=0;
        int l=0;
        for(char c:s){
            if(c=='('){
                r++;
            }else if(r>0){
                r--;
            }else{
                l++;
            }
           
        }
         return r+l;
            
    }
};