class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currmax=0;
        int currmin=0;
        int glomin=nums[0];
        int glomax=nums[0];
        int total=0;
        for(int x:nums){
            total+=x;
            currmax=max(x,currmax+x);
            currmin=min(x,currmin+x);
            glomax=max(glomax,currmax);
            glomin=min(glomin,currmin);

        }

        if(currmax<0){
            return glomax;
        }

        return max(glomax,total-glomin);
    }
};