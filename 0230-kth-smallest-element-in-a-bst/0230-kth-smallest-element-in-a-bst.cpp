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
    void helper(TreeNode *root, int &result, int &count, int &k){
        if(root == nullptr || count > k) return;
        helper(root->left, result, count, k);
        count++;
        if(count == k){
            result = root->val;
            return;
        }
        helper(root->right, result, count, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int result = 0;
        int count = 0;
        helper(root, result, count, k);
        return result;
        
    }
};