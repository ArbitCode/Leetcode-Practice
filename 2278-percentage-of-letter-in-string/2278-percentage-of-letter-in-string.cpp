class Solution {
public:
    int percentageLetter(string s, char letter) {

        map<char, int> mp;
        for (const auto& it : s)
            mp[it]++;
        auto it = mp.find(letter);
        if (it != mp.end()) {
            return (it->second * 100) / s.length();
        }
        return 0;
    }
};