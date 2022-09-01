class Solution {
public:
    int nextWhiteSpace(string s, int afterI){
        if(afterI > s.length() -1) return afterI;
        while(s[afterI] != ' ' && afterI < s.length()) afterI++;
        return afterI;
    }
    string reverseWords(string s) {
        int left = 0, white = nextWhiteSpace(s, 0);
        while(white < s.length() + 1){
            int right = white - 1;
            while(left < right) swap(s[left++], s[right--]);
            left = white + 1;
            white = nextWhiteSpace(s, white + 1);
        }
        return s;
    }
};