// LeetCode 34: Find First and Last Position of Element in Sorted Array
// Approach: Repeating the binary search algorithm after finding the target on it's left and right for the first and last occurence respectively.

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2);
        int left, right, mid;

        // first occurence 
        left = 0;
        right = n-1;
        int idx = -1;
        
        while(left <= right){
            mid = left + (right - left) / 2;
        
            if(nums[mid] == target){
                idx = mid;
                right = mid - 1;
            }
            else if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }

        ans[0] = idx;

        // last occurence 
        left = 0;
        right = n-1;
        idx = -1;

        while(left <= right){
            mid = left + (right - left) / 2;
        
            if(nums[mid] == target){
                idx = mid;
                left = mid + 1;
            }
            else if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }

        ans[1] = idx;

        return ans;
    }
};