class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result;
        vector<vector<string>> check;
        for(string text: strs){
            string key = text;
            sort(key.begin(), key.end());
            result[key].push_back(text);
        }

        for( auto& [key,value]: result){
            check.push_back(value);
        }

        return check;

    }
};
