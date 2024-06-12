class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int> ans(2, -1);
    int n = nums.size();

    // Edge case: empty array
    if (n == 0) {
        return ans;
    }

    // Find the first occurrence of the target
    for (int i = 0; i < n; ++i) {
        if (nums[i] == target) {
            ans[0] = i;
            break;
        }
    }

    // If the target was not found, return [-1, -1]
    if (ans[0] == -1) {
        return ans;
    }

    // Find the last occurrence of the target
    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] == target) {
            ans[1] = i;
            break;
        }
    }

    return ans;
    }
};