// LeetCode 217: Contains Duplicate
// Approach: Created a hash map to keep the count of each value in the array

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(mpp[nums[i]] >= 1) return true;
            mpp[nums[i]]++;
        }
        return false;
    }
};