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
//     int pathLength = 0;
//     void dfs(TreeNode* node, bool goLeft, int steps) {
//         if (node == nullptr) {
//             return;
//         }
//         pathLength = max(pathLength, steps);
//         if (goLeft) {
//             dfs(node->left, false, steps + 1);
//             dfs(node->right, true, 1);
//         } else {
//             dfs(node->left, false, 1);
//             dfs(node->right, true, steps + 1);
//         }
//     }

//     int longestZigZag(TreeNode* root) {
//         dfs(root, false, 0);
//         dfs(root, true, 0);
//         return pathLength;
//     }
// };

class Solution {
public:
    int longestZigZag(TreeNode* root) {
        int max_length = 0;
        
        // Start with root node, not traversing any subtree
        dfs(root, false, 0, max_length); 
        
        // Start with root node, traversing right subtree
        dfs(root, true, 0, max_length); 
        
        return max_length;
    }
    
    void dfs(TreeNode* node, bool is_right, int length, int& max_length) {
        if (!node) return;
        
        // Update max_length with current ZigZag path length
        max_length = max(max_length, length); 
        
        if (is_right) { // Traversing right subtree
            dfs(node->right, false, length + 1, max_length); // Check left subtree
            dfs(node->left, true, 1, max_length); // Check right subtree
        } else { // Traversing left subtree
            dfs(node->left, true, length + 1, max_length); // Check right subtree
            dfs(node->right, false, 1, max_length); // Check left subtree
        }
    }
};