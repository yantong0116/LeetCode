/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


#define LEFT -1
#define RIGHT 1

void DFS(struct TreeNode* root, int side, int cnt, int* ans){
    if(!root) return;
    if(cnt > *ans)
        *ans = cnt;
	/* check the preview node is left or right and decide the cnt add 1 or reset to 1 or not */
    DFS(root->left, LEFT, side == LEFT? 1 : cnt + 1, ans);
    DFS(root->right, RIGHT, side == RIGHT? 1 : cnt + 1, ans);
}

int longestZigZag(struct TreeNode* root){
    if(!root) return 0;
    int ans = 0;
    DFS(root, 0, 0, &ans);
    return ans;
}