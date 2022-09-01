class Solution {
public:
    int start, end;
    int maxSubArray(vector<int>& nums) {
        int msf = INT_MIN, meh = 0, begin = 0;
        for(int i = 0; i < nums.size(); i++){
            meh += nums[i];
            if(meh < nums[i]){
                meh = nums[i];
                begin = i;
            }
            if(meh > msf){
                msf = meh;
                start = begin;
                end = i;
            }
        }
        return msf;
    }
};