// LeetCode 102: Binary Tree Level Order Traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void bfs(TreeNode* root, vector<vector<int>>& ans){
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int len = q.size();
            vector<int> curr;

            for(int i = 0; i < len; i++){
                TreeNode* temp = q.front();
                q.pop();
                
                curr.push_back(temp->val);

                if (temp->left != nullptr) q.push(temp->left);
                if (temp->right != nullptr) q.push(temp->right);
            }
            
            ans.push_back(curr);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};

        vector<vector<int>> ans;
        bfs(root,ans);
        return ans;
    }
};