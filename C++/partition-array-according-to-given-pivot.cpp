// Time:  O(n)
// Space: O(n)

// two pointers
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int less = 0, greater = 0;
        for (const auto& x : nums) {
            if (x < pivot) {
                ++less;
            } else if (x > pivot) {
                ++greater;
            }
        }
        vector<int> result(size(nums), pivot);
        int left = 0, right = size(nums) - greater;
        for (const auto& x: nums) {
            if (x < pivot) {
                result[left++] = x;
            } else if (x > pivot) {
                result[right++] = x;
            }
        }
        return result;
    }
};
