class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0; int count1 = 0;
        for(auto num : nums){
            if(num == 0) count1 = 0;
            else{
                count1++;
                res = max(count1, res);
            }
            
        }
        return res;
        
    }
};