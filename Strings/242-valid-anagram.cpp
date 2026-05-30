// LeetCode 242: Valid Anagram
// Approach: Checking for the occurence of each character in alphabet, adding 1 if it's in string "s" and subtracting "1" if it's in string "t"

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int n = s.size();
        int alpha[26] = {0};
        for(int i = 0; i < n; i++){
            alpha[s[i] - 'a']++;
            alpha[t[i] - 'a']--;
        }

        for(int i : alpha) if(i!=0) return false;

        return true;
    }
};