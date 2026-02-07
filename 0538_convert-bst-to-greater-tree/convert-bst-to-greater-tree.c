/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void traversal(struct TreeNode* root, int* cur){
    if(!root) return;
    if(root->right){
        traversal(root->right, cur);
    }
    (*cur) += root->val;
    root->val = (*cur);
    if(root->left){
        traversal(root->left, cur);
    }
}

struct TreeNode* convertBST(struct TreeNode* root) {
    int cur = 0;
    traversal(root, &cur);
    return root;
    
}