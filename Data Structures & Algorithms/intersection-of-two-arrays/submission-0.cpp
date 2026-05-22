class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set_research;
        unordered_set<int> set_result;
        for(int num:nums1){
            set_research.insert(num);
        }

        for(int num:nums2){
            if(set_research.count(num) > 0){
                set_result.insert(num);
            }
        }

        return vector<int>(set_result.begin(), set_result.end());
    }
};