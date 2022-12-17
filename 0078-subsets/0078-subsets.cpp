class Solution {
public:
    void getSubsetList(vector<int>& nums, vector<vector<int>>& res, int start, int end, vector<int>& subset){
        if(start>end){
            res.push_back(subset);
            return;
        }else{
            subset.push_back(nums[start]);
            getSubsetList(nums, res, start+1, end, subset);
            subset.pop_back();
            getSubsetList(nums, res, start+1, end, subset);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        getSubsetList(nums, res, 0, nums.size() - 1, subset);
        return res;
        
    }
};