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

int countNodes(struct Node * root) {
    int c = 0;
    if (root == NULL)
        return 0;
    for (int i = 0; i < root->numChildren; i++)
        c = c + countNodes(root->children[i]);
    return (c + 1);
}

void recur(struct Node * root, int *v, int *pos) {
    int i;
    if (root == NULL)
        return;
    v[*pos] = root->val;
    *pos = *pos + 1;
    for (i = 0; i < root->numChildren; i++)
        recur(root->children[i], v, pos);
    return;
}

int* preorder(struct Node* root, int* returnSize) {
    *returnSize = countNodes(root);
    int* result = (int*)malloc(*returnSize * sizeof(int));
    int pos = 0;
    recur(root, result, &pos);
    return result;
}
