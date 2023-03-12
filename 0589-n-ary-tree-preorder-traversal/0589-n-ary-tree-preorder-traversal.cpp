/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

// class Solution {
// public:
//     vector<int> preorder(Node* root) {
//         vector<int> result;
        
//         vector<int> recur(Node* curr){
//             if(curr){
//                 result.push_back(curr->val);
//                 for(Node* child: curr->children){
//                     recur(child);
//                 }
//             }
//         }
//         recur(root);
//         return result;
//     }
// };

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        recur(root, result);
        return result;
    }
    
    void recur(Node* curr, vector<int>& res) {
        if (curr) {
            res.push_back(curr->val);
            for (Node* child : curr->children) {
                recur(child, res);
            }
        }
    }
};


