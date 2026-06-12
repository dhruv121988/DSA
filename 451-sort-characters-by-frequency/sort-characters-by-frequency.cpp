class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;

        for(char ch : s) {
            freq[ch]++;
        }

        vector<pair<int,char>> arr;

        for(auto it : freq) {
            arr.push_back({it.second, it.first});
        }

        sort(arr.rbegin(), arr.rend());

        string ans = "";

        for(auto p : arr) {
            ans.append(p.first, p.second);
        }

        return ans;
    }
};