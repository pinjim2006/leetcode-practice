/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isLeaf(struct TreeNode* node){
    return !(node->left || node->right);
}

int sumOfLeftLeaves(struct TreeNode* root) {
    if(!root) return 0;
    if(root->left){
        if(isLeaf(root->left)) return root->left->val + sumOfLeftLeaves(root->right);
    }
    return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
}