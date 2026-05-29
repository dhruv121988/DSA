class Solution {
public:
    int findMin(vector<int>& nums) {
        int minp = *min_element(nums.begin(), nums.end());
        return minp;
    }
};