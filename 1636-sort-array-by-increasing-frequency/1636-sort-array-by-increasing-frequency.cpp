class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        for (const auto& it : nums)
            mp[it]++;
        vector<pair<int, int>> vp;
        for (const auto& it : mp)
            vp.push_back({it.first, mp[it.first]});
        sort(vp.begin(), vp.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 if (a.second != b.second)
                     return a.second < b.second;
                 return a.first > b.first;
             });

        vector<int> ans;
        for (const auto& it : vp) {
            for (int i = 1; i <= it.second; i++) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};