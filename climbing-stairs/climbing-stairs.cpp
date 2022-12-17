class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        int fi = 1;
        int se = 2;
        for(int i = 3; i <= n; i++){
            int third = fi + se;
            fi = se;
            se = third;
        }
        return se;
        
    }
};