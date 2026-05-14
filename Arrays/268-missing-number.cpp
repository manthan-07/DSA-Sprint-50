// LeetCode 268: Missing Number
// Approach: Sum the array and subract it from the arithemethic sum of the n(size of array) natural numbers.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++) sum += nums[i];
        int actualSum = ((n+1)*n)/2;
        return actualSum - sum;
    }
};