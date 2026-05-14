// LeetCode 7: Reverse Integer
// Approach: Reverse the number digit by digit and check overflow before multiplying by 10.

class Solution {
public:
    int reverse(int x) {
        long int reverse=0;
        while(x != 0){
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
        if (reverse>INT_MAX || reverse<INT_MIN) return 0;
        return reverse;
    }
};