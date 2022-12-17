class Solution {
public:
    int getNoOfDigits(int n){
        if(n == 0) return 0;
        return 1 + getNoOfDigits(n/10);
    }
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(auto it : nums){
            int count = getNoOfDigits(it);
            if(count > 1 && count %2 == 0) res++;
        }
        return res;
        
    }
};