// LeetCode 3: Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLen = 0;
        unordered_map<char, int> counts;
        int left = 0;

        for(int right = 0; right < n; right++){
            while(counts[s[right]] > 0){
                counts[s[left]]--;
                left++;
            }
            counts[s[right]]++;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};