/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(!root) return NULL;
    if(root == p || root == q) return root;
    struct TreeNode* left, * right;
    left = lowestCommonAncestor(root->left, p, q);
    right = lowestCommonAncestor(root->right, p, q);
    if(left && right) return root;
    if(left) return left;
    if(right) return right;
    return NULL;
}

