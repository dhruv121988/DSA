class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        for(int x:s){
            mp[x]++;
        }
        for(int y:t){
            mp1[y]++;
        }
        if(mp==mp1){
            return true;
        }
        return false;

        
    }
};