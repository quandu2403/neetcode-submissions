class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> check;
        for (string s : operations) {
            if (s == "C") {
                check.pop_back();
            } else if (s == "D") {
                check.push_back(check.back() * 2);
            } else if (s == "+") {
                check.push_back((check.back() + check[check.size() - 2]));
            } else {
                check.push_back(stoi(s));
            }
        }

        return accumulate(check.begin(), check.end(), 0);
    }
};