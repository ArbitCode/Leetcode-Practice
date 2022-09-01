class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find peak - 1 index
        int prevPeak = nums.size() - 2;
        while(prevPeak >= 0 && nums[prevPeak] >= nums[prevPeak + 1]) prevPeak--;
        
        if(prevPeak >= 0){
            int to_swap = nums.size() - 1;
            while(nums[to_swap] <= nums[prevPeak]) to_swap--;
            swap(nums[prevPeak], nums[to_swap]);
        }
        
        reverse(nums.begin() + prevPeak + 1, nums.end());
        
    }
};