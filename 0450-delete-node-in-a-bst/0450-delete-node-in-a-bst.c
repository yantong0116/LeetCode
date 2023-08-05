/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* deleteNode(struct TreeNode* root, int key){
    if(root){
        //We frecursively call the function until we find the target node
        if(key < root->val) root->left = deleteNode(root->left, key);     
        else if(key > root->val) root->right = deleteNode(root->right, key);       
        else{
            if(!root->left && !root->right) return NULL;  
            if (!root->left || !root->right)
                return root->left ? root->left : root->right;    //One child contion -> replace the node with it's child
                                                                //Two child condition   
            struct TreeNode* temp = root->left;                        //(or) TreeNode *temp = root->right;
            while(temp->right != NULL) temp = temp->right;     //      while(temp->left != NULL) temp = temp->left;
            root->val = temp->val;                            //       root->val = temp->val;
            root->left = deleteNode(root->left, temp->val);  //        root->right = deleteNode(root->right, temp);		
        }
    }
    return root;
}

