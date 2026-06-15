// LeetCode 560: Subarray Sum Equals K

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> subSum;
        subSum[0] = 1;
        int sum = 0, count = 0;

        for (int n : nums) {
            sum += n;
            if (subSum.find(sum - k) != subSum.end()) {
                count += subSum[sum - k];
            }
            subSum[sum]++;
        }

        return count;        
    }
};