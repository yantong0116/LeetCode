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

// class Solution {
// public:
//     int count = 0;
    
//     void solve(TreeNode* root, long int targetSum){
//         if(root == NULL) return;
        
//         if(root->val == targetSum){
//             count++;
//         }
        
//         solve(root->left, targetSum - root->val);
//         solve(root->right, targetSum - root->val);
//     }
    
//     int pathSum(TreeNode* root, int targetSum) {
//         if(root == NULL) return 0;
//         solve(root, targetSum);
//         pathSum(root->left, targetSum);
//         pathSum(root->right, targetSum);
//         return count;
//     }
// };


class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return 0;
        return countPathsWithSum(root, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
    }

private:
    int countPathsWithSum(TreeNode* node, long int targetSum) {
        if (node == nullptr) return 0;

        int count = 0;
        if (node->val == targetSum) {
            count++;
        }

        count += countPathsWithSum(node->left, targetSum - node->val);
        count += countPathsWithSum(node->right, targetSum - node->val);
        return count;
    }
};
