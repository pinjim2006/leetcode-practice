/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool check(struct TreeNode* root, int val){
    if(!root) return true;
    if(root->val != val) return false;
    return check(root->left, val) && check(root->right, val);
}

bool isUnivalTree(struct TreeNode* root) {
    return check(root->left, root->val) && check(root->right, root->val);
}