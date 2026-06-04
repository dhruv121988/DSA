class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        int res=nums[0];

        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=maxi*nums[i];
            int v3=mini*nums[i];

            maxi=max(nums[i],max(v2,v3));
            mini=min(nums[i],min(v2,v3));
            res=max(res,max(maxi,mini));
        }
        return res;
    }
};