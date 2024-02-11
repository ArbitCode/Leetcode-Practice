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
    int heightTree(TreeNode* root){
        if(root == nullptr) return 0;
        return 1 + max(heightTree(root->left), heightTree(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root== nullptr) return true;
        int lh = heightTree(root->left);
        int rh = heightTree(root->right);
        if(abs(lh-rh)>1) return false;
        bool leftB = isBalanced(root->left);
        bool rightB = isBalanced(root->right);
        if(!leftB || !rightB) return false;
        return true;
        
        
    }
};