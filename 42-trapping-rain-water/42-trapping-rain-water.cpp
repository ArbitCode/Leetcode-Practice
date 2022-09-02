class Solution {
public:
    
    int getLeftMaxHeight(vector<int> height, int index){
        int leftMax = height[index];
        for(int i = index; i >= 0; i--)
            leftMax = max(leftMax, height[i]);
        return leftMax;
    }
    
    int getRightMaxHeight(vector<int> height, int index){
        int rightMax = height[index];
        for(int i = index; i < height.size(); i++)
            rightMax = max(rightMax, height[i]);
        return rightMax;
    }
    
    int trap(vector<int>& height) {
        int ans = 0;
        int size = height.size();
        vector<int> dpLeftMax(size), dpRightMax(size);
        dpLeftMax[0] = height[0];
        for(int i = 1; i < size; i++)
            dpLeftMax[i] = max(dpLeftMax[i - 1] , height[i]);
        dpRightMax[size - 1] = height[size - 1];
        for(int i = size - 2; i >= 0; i--)
            dpRightMax[i] = max(dpRightMax[i + 1], height[i]);
        for(int i = 1; i < height.size() - 1; i++)
            ans += min(dpLeftMax[i], dpRightMax[i]) - height[i];
        
        //for(int i = 0; i < height.size(); i++)
          //  ans += min(getLeftMaxHeight(height, i), getRightMaxHeight(height, i)) - height[i];
        return ans;
        
        
    }
};