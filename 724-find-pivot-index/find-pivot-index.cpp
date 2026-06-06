class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }

        int leftsum=0;
        int rightsum;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            rightsum=totalsum-leftsum-nums[i];
            if(rightsum==leftsum){
                return i;
            }else{
                leftsum+=nums[i];
            }
        }
        return -1;
        
    }
};