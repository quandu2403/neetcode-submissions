class Solution {
   public:
    bool isValid(string s) {
        if (s.empty() || s[0] == ']' || s[0] == '}' || s[0] == ')') {
            return false;
        }
        vector<char> check;
        for (char c : s) {
            if (c == '[' || c == '{' || c == '(') {
                check.push_back(c);
            } else {
                if (check.empty()) {
                    return false;
                } else if (c == ']' && check.back() != '[') {
                    return false;
                } else if (c == '}' && check.back() != '{') {
                    return false;
                } else if (c == ')' && check.back() != '(') {
                    return false;
                }
                check.pop_back();
            }
        }
        if (check.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
