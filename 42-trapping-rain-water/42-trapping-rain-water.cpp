class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0, left = 0, right = height.size() - 1, left_max = 0, right_max = 0;
        //case problem devide in two part
        while(left < right){
            //water kispe ayega, ziska height small ho
            if(height[left] < height[right]){
                //pani kb ayega jab height left_max se small ho nhi to left_max update hoga
                height[left] >= left_max ? left_max = height[left] : ans += left_max - height[left];
                left++;
                
            }else{
                //pani kb ayega jb height right_max se samll ho nhi to right_max update hoga
                height[right] >= right_max ? right_max = height[right] : ans += right_max - height[right];
                right--;
            }
        }
        return ans;
    }
};