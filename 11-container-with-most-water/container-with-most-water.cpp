class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxar=0;
        int left=0;
        int right=height.size()-1;

        while(left<right){
            maxar=max(maxar,(right-left)*min(height[right],height[left]));
            if(height[left]>height[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxar;
    }
};