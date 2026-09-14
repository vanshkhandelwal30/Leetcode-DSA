class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;

        // Step 1: Store last k elements
        vector<int> temp;

        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        // Step 2: Shift remaining elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Step 3: Put temp elements at the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};