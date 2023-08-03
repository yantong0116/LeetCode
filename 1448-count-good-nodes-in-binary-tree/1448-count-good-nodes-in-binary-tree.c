/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int ans;

int goodNodes(struct TreeNode* root){
    ans = 0;
    dfs(root, -10000);
    return ans;
}

void dfs(struct TreeNode* root, int mx){
    if (!root) return;
    if (mx <= root->val){
        ++ans;
        mx = root -> val;
    }
    dfs(root->left, mx);
    dfs(root->right, mx);
}