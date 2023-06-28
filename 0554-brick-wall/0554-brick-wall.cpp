class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        map<int, int> mp;
        int gap = 0;
        for(int i = 0; i < wall.size(); i++){
            long long sum = 0;
            for(int j = 0; j < wall[i].size() - 1; j++){
                sum += wall[i][j];
                mp[sum]++;
                gap = max(gap, mp[sum]);
            }
        }
        return wall.size() - gap; // gap + cross = wall.size()
        
    }
};