class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int res = 0;
        while(k) res = pq.top(), pq.pop(), k--;
        return res;
        
    }
};