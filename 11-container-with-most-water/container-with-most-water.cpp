class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int r=n-1;
        int max_capacity=0;
        while(left<r){
            max_capacity=max(max_capacity,min(height[r],height[left])*(r-left));
            if(height[left]>height[r]){
                r--;
            }else{
                left++;
            }
            
            
        }
        return max_capacity;
    }
};