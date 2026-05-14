// LeetCode 1: Two Sum
// Approach: Brute Force- Sum each set of possible pair till the target is found.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> arr;
        for (int i = 0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    arr.push_back(i);
                    arr.push_back(j);
                    break;
                }
            }
        }
        return arr;
    }
};