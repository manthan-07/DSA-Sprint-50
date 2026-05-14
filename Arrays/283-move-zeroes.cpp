// LeetCode 283: Move Zeroes
// Approach: Move all non-zero elements to the front, then fill the remaining positions with zeroes.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0) nums[++count] = nums[i];
        }
        for(int i = count+1; i < nums.size(); i++) nums[i] = 0;
    }
};