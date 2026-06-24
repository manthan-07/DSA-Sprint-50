// LeetCode 39: Combination Sum

class Solution {
public:
    void combinations(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& curr, int idx){
        if(target == 0){
            res.push_back(curr);
            return;
        }
        if(target < 0 || idx >= candidates.size()) return;

        curr.push_back(candidates[idx]);
        combinations(candidates, target - candidates[idx], res, curr, idx);
        curr.pop_back();
        combinations(candidates, target, res, curr, idx+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if(target == 1) return {};
        vector<vector<int>> res;
        vector<int> curr;
        combinations(candidates, target, res, curr, 0);
        return res;
    }
};