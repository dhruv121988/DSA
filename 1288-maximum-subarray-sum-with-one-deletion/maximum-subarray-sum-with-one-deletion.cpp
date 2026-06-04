class Solution {
public:
    int maximumSum(vector<int>& arr) {
        
        int nodelete=arr[0];
        int del=0;
        int ans=arr[0];

        for(int i=1;i<arr.size();i++){
            int prev_nodelete=nodelete;

            nodelete=max(arr[i],nodelete+arr[i]);
            del=max(prev_nodelete,del+arr[i]);

            ans=max(ans,max(nodelete,del));
        }
        return ans;
    }
};