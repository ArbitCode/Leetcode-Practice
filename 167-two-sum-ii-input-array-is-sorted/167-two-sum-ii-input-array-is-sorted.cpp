class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int comp = 0;
        for(int i = 0; i < numbers.size(); i++){
            comp = target - numbers[i];
            if(binary_search(numbers.begin(), numbers.end(), comp)) return {i+1, (int)(upper_bound(numbers.begin(), numbers.end(), comp) - numbers.begin())};
        }
        return {-1, -1};
    }
};