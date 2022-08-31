class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int comp = 0;
        for(int i = 1; i <= numbers.size(); i++){
            comp = target - numbers[i-1];
            if(binary_search(numbers.begin(), numbers.end(), comp)) return {i, (int)(upper_bound(numbers.begin(), numbers.end(), comp) - numbers.begin())};
        }
        return {-1, -1};
    }
};