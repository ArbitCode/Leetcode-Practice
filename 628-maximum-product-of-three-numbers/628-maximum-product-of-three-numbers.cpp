class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX;
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MAX;
        for(auto num : nums){ 
            if(num <= min1){ // num < min1, min2 
                min2 = min1;
                min1 = num; 
            }else if(num <= min2){ // num between min1, min2
                min2 = num;
            }
            if(num > max1){ // num > max1, max2, max3
                max3 = max2;
                max2 = max1;
                max1 = num;
            }else if(num >= max2){  //num between max1 , max2
                max3 = max2;
                max2 = num;
            }else if(num>=max3){ //num between max2, max3
                max3 = num;
            }
            
        }
        
        return min1 * min2 * max1 < max1*max2*max3 ? max1*max2*max3 :min1 * min2 * max1;
    }
};