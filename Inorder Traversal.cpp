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
    void tree(TreeNode*root,vector<int>&A){
        if(!root)return;
        tree(root->left,A);
        A.push_back(root->val);
        tree(root->right,A);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>A;
        tree(root,A);
        return A;
    }
};
