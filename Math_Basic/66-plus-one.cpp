// LeetCode 66: Plus One
// Approach: Adding one to the last value. If it becomes 10, overwriting it to 0 and adding one to the previous value.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() - 1;
        digits[last]++;
        while(digits[last] == 10){
            if(last == 0){
                digits[last] = 0;
                digits.insert(digits.begin(),1);
                break;
            } 
            digits[last--] = 0;
            digits[last]++; 
        }
        return digits;
    }
};