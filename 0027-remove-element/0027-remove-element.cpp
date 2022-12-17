class Solution {
public:
    //find k, interate over array if ele not val replace 
    int removeElement(vector<int>& nums, int val) {
        int valc = 0;
        for(auto it : nums) if(it == val) valc++;
        int k = nums.size() - valc;
        int j = 0;
        for(int i = 0; i < nums.size() && j < k; i++){
            if(nums[i] == val) continue;
            nums[j++] = nums[i];
        }
        
        return k;
    }
};