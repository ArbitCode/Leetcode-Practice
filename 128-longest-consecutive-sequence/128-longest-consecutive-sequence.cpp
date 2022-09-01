class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int maxStreak = 1;
        int currentStreak = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]-1) currentStreak++;
            else if(nums[i] == nums[i+1]) continue;
            else currentStreak = 1;
            maxStreak = max(maxStreak, currentStreak);
        }
        return maxStreak;
        
    }
};