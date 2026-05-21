class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxRight = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {
            int oldValue = arr[i];               // lưu giá trị cũ
            arr[i] = maxRight;                   // thay bằng max bên phải
            maxRight = max(maxRight, oldValue);  // cập nhật maxRight bằng giá trị cũ
        }

        return arr;
    }
};