class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int n=height.size();
        int r=n-1;
        int capacity=0;
        while(l<r){
            capacity=max(capacity,min(height[l],height[r])*(r-l));
            if(height[r]<height[l]){
                r--;
            }else{
                l++;
            }
            
        }
        return capacity;
        
    }
};