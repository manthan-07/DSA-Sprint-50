// LeetCode 49: Group Anagrams
// Approach: Finding the sorted string for each string element in strs, and using it as key for hash table.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        for(string s : strs){
            string sorted_s = s;
            sort(sorted_s.begin(),sorted_s.end());
            group[sorted_s].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto x : group){
            ans.push_back(x.second);
        }

        return ans;
    }
};