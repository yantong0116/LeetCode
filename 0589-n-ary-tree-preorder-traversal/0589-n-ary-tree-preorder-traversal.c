/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void search(struct Node* root, int* arr, int* count) {
    if (!root) return;
    arr[(*count)++] = root->val;
    for (int i = 0; i < root->numChildren; i++) {
        search(root->children[i], arr, count);
    }
}

int* preorder(struct Node* root, int* returnSize) {
    int* arr = (int*) malloc(10000 * sizeof(int));
    int count = 0;
    search(root, arr, &count);
    *returnSize = count;
    return arr;
}