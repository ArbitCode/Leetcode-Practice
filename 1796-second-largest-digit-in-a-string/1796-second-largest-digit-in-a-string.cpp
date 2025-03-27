class Solution {
public:
    int secondHighest(string s) {
        int res1 = -1;
        int res2 = -1;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s.at(i))){
                int x = s[i] - '0';
                if(x > res1){
                    res2 = res1;
                    res1 = x;
                }else if( x > res2 && x != res1){
                res2 = x;
                }}
        }
        return res2;
    }
};