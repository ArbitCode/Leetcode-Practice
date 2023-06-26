class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int i = 0;
        int ans = 0;
        int num = 0;
        
        for(int j = 0; j < nums.size(); j++){
            while((num & nums[j]) != 0) num^=nums[i++];
            num|=nums[j];
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};