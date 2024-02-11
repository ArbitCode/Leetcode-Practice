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
    int height(TreeNode *root, int &mexi){
        if(root == nullptr) return 0;
        int lh = height(root->left, mexi);
        int rh = height(root->right, mexi);
        mexi = max(mexi, lh+rh);
        return 1 + max(lh, rh);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int mexi = 0;
        height(root, mexi);
        return mexi;
        
    }
};