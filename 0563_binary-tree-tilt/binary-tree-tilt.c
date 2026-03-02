/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void postorderTraversal(struct TreeNode* root){
    if(!root) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    if(!(root->left || root->right)) return;
    else if(!(root->left)) root->val += root->right->val;
    else if(!(root->right)) root->val += root->left->val;
    else root->val += root->left->val + root->right->val;
}

int preorderTraversal(struct TreeNode* root){
    if(!root) return 0;
    if(!(root->left || root->right)) return 0;
    else if(!(root->left)) return abs(root->right->val) + preorderTraversal(root->right);
    else if(!(root->right)) return abs(root->left->val) + preorderTraversal(root->left);
    else return abs(root->left->val - root->right->val) + preorderTraversal(root->right) + preorderTraversal(root->left);
}

int findTilt(struct TreeNode* root) {
    if(!root) return 0;
    postorderTraversal(root);
    return preorderTraversal(root);
}