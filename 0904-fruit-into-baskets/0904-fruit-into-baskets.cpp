class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0, j = 0, ans = 0;
        int k = 2;
        map<int, int> mp;
        while(j < fruits.size()){
            mp[fruits[j]]++;
            if(mp.size() <= k) ans = max(ans, j - i + 1), j++;
            else{
                while(mp.size() > k){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]] == 0) mp.erase(fruits[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};