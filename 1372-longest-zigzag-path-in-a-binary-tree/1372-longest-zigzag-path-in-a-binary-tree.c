/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void dfs(struct TreeNode* node, bool goLeft, int steps, int* pathLength) {
    if (!node) return;

    *pathLength = (*pathLength > steps) ? *pathLength : steps;
    if (goLeft) {
        dfs(node->left, false, steps + 1, pathLength);
        dfs(node->right, true, 1, pathLength);
    } else {
        dfs(node->left, false, 1, pathLength);
        dfs(node->right, true, steps + 1, pathLength);
    }
}

int longestZigZag(struct TreeNode* root) {
    if (!root) return 0;
    int pathLength = 0;
    dfs(root, false, 0, &pathLength);
    dfs(root, true, 0, &pathLength);
    return pathLength;
}


// #define LEFT -1
// #define RIGHT 1

// void DFS(struct TreeNode* root, int side, int cnt, int* ans){
//     if(!root) return;
//     if(cnt > *ans)
//         *ans = cnt;

//     DFS(root->left, LEFT, side == LEFT? 1 : cnt + 1, ans);
//     DFS(root->right, RIGHT, side == RIGHT? 1 : cnt + 1, ans);
// }

// int longestZigZag(struct TreeNode* root){
//     if(!root) return 0;
//     int ans = 0;
//     DFS(root, 0, 0, &ans);
//     return ans;
// }