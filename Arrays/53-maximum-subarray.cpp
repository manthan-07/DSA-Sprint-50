// LeetCode 53: Maximum Subarray
// Approach: Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int best = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            curr = max(nums[i], curr + nums[i]);
            best = max(best, curr);
        }

        return best;
    }
};