// LeetCode 9: Palindrome Number
// Approach: Reverse the number and compare it with the original number.

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long int rev = 0;
        long int og = x;
        while(x != 0){
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        if(og == rev) return true;
        else return false; 
    }
};