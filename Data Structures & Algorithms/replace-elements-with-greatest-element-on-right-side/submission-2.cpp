class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxRight = -1;
        vector<int> result(arr.size(), 0);
        for (int i = arr.size() - 1; i >= 0; i--) {
            result[i] = maxRight;
            maxRight = max(maxRight, arr[i]);
        }
        return result;
    }
};