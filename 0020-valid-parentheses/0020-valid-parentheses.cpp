class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st1;
        std::stack<char> st2;

        for (auto ch : s) {
            if (ch == '{' || ch == '[' || ch == '(') {
                st1.push(ch);
            } else {
                if (st1.size() == 0)
                    return false;
                char top = st1.top();
                if (ch == ')' && top != '(')
                    return false;
                if (ch == ']' && top != '[')
                    return false;
                if (ch == '}' && top != '{')
                    return false;
                st1.pop();
            }
        }

        if (st1.size() == 0)
            return true;
        return false;
    }
};