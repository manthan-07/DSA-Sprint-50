// LeetCode 169: Majority Element
// Approach: Counting number of times each distinct element occurs using hash map

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;

        for(int i = 0; i < n; i++) count[nums[i]]++;

        for(auto x: count){
            if(x.second > n/2) return x.first;
        }

        return 0;
    }
};