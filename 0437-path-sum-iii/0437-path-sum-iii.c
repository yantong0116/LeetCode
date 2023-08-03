/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int solve(struct TreeNode* root, long int targetSum){
    if (root == NULL) return 0;

    int count = 0;
    if (root->val == targetSum) {
        count++;
    }

    count += solve(root->left, targetSum - root->val);
    count += solve(root->right, targetSum - root->val);

    return count;
}

int pathSum(struct TreeNode* root, int targetSum){
    if (root == NULL) return 0;

    int count = solve(root, targetSum);
    count += pathSum(root->left, targetSum);
    count += pathSum(root->right, targetSum);

    return count;
}
