class Solution {
public:
    void helper(vector<char>& s, int left, int right){
        if(right<left) return;
        //swap
        swap(s[left], s[right]);
        helper(s, left+1, right-1);
    }
    void reverseString(vector<char>& s) {
        helper(s, 0, s.size()-1);
    }
};