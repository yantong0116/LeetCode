/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* findMin(struct TreeNode* node) {
    while (node->left) {
        node = node->left;
    }
    return node;
}

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (!root) {
        return NULL; // 當根節點為空，表示鍵值不存在於樹中，直接返回 NULL
    }

    if (key < root->val) {
        root->left = deleteNode(root->left, key); // 在左子樹中遞迴刪除鍵值節點
    } else if (key > root->val) {
        root->right = deleteNode(root->right, key); // 在右子樹中遞迴刪除鍵值節點
    } else {
        // 找到了目標節點
        if (!root->left) {
            // 目標節點沒有左子節點，將目標節點替換為右子節點
            struct TreeNode* temp = root->right;
            free(root); // 釋放目標節點的記憶體
            return temp;
        } else if (!root->right) {
            // 目標節點沒有右子節點，將目標節點替換為左子節點
            struct TreeNode* temp = root->left;
            free(root); // 釋放目標節點的記憶體
            return temp;
        }

        // 目標節點有兩個子節點
        // 找到右子樹的最小值節點（或左子樹的最大值節點）
        struct TreeNode* temp = findMin(root->right);
        root->val = temp->val; // 用最小值節點的值替換目標節點的值
        root->right = deleteNode(root->right, temp->val); // 遞迴刪除最小值節點
    }
    return root;
}

