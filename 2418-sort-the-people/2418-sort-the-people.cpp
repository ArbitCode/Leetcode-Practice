class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>> persons;
        for (int i = 0; i < names.size(); i++)
            persons.push_back({names[i], heights[i]});
        sort(persons.begin(), persons.end(),
             [](const pair<string, int>& a, const pair<string, int>& b) {
                 return a.second > b.second;
             });
        vector<string> ans;
        for (const auto& it : persons)
            ans.push_back(it.first);
        return ans;
    }
};