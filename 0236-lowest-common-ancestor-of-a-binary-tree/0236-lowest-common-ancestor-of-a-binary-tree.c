/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

// 尋找二叉樹節點的最低共同祖先
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    // 如果節點為空，返回NULL
    if (!root) return NULL;
    
    // 如果節點是p或q，則該節點為最低共同祖先
    if (root == p || root == q) return root;
    
    // 在左子樹中尋找p和q的最低共同祖先
    struct TreeNode* left = lowestCommonAncestor(root->left, p, q);
    
    // 在右子樹中尋找p和q的最低共同祖先
    struct TreeNode* right = lowestCommonAncestor(root->right, p, q);
    
    // 如果p和q分別在當前節點的左右子樹中，則當前節點為最低共同祖先
    if (left && right) return root;
    
    // 如果只有一個節點在左子樹或右子樹中，則返回該節點作為最低共同祖先
    if (left) return left;
    if (right) return right;
    
    // 如果p和q都不在當前節點的子樹中，返回NULL
    return NULL;
}