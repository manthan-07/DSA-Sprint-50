// LeetCode 35: Search Insert Position
// Approach: Use linear search to find the first index where nums[index] >= target.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < target) idx++;
            else if(nums[i] == target){
                idx = i;
                break;
            }
            else break;
        }
        return idx;
    }
};