class Solution {
public:
    int minimumPartition(string s, int k) {
        //min number of substring ====> substring value should be max with condition.
        long long num = 0, count = 0;
        for(auto ch : s){
             num = num * 10 + (ch - '0'); //form substring i.e number
            if(num > k){            //max condition
                count++;
                num = ch - '0';
            }
            if(num > k){
                return -1;
            }
        }
        return (int)(count+1);
        
    }
};