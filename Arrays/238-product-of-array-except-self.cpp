// LeetCode 238: Product of Array Except Self
// Approach: Calculate products of prefix and suffix of each element and multiplying them to get actual product of array except self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> pres(n);
        vector<int> sufs(n);

        int pre = 1, suf = 1;
        for(int i = 0, j=n-1; i < n && j > -1; i++, j--){
            pres[i] = pre;
            sufs[j] = suf;
            pre *= nums[i];
            suf *= nums[j];
        }

        for(int i = 0; i < n; i++){
            ans[i] = pres[i] * sufs[i];
        }
        return ans;
    }
};