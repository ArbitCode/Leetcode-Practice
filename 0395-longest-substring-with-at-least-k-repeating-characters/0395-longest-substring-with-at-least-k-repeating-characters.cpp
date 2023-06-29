class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        if(n == 0 || k > n) return 0;
        if(k == 0) return n;
        unordered_map<char, int> m;
        for(char c : s) m[c]++;
        int i = 0;
        while(i < n && m[s[i]] >= k) i++;
        if(i == n) return n;
        int left = longestSubstring(s.substr(0, i), k);
        while(i < n && m[s[i]] < k) i++;
        int right = longestSubstring(s.substr(i), k);
        return max(left, right);
        
    }
};