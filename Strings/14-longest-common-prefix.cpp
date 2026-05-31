// LeetCode 14: Longeest Common Prefix
// Approach: Sorting the array of strings, and comparing prefix of first and last to get the longest common prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());

        string ans = "";
        int len = min(strs[0].size(),strs[n-1].size());
        
        for(int i = 0; i < len; i++){
            if(strs[0][i] != strs[n-1][i]) return ans;
            ans += strs[0][i];
        }

        return ans;
    }
};