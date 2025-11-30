/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSymmetricTree(struct TreeNode* p, struct TreeNode* q){
    if((p == NULL) ^ (q == NULL))return false;
    if(p == NULL) return true;
    if(p->val != q->val) return false;
    return isSymmetricTree(p->left, q->right) && isSymmetricTree(p->right, q->left);
}

bool isSymmetric(struct TreeNode* root) {
    return isSymmetricTree(root->left, root->right);
}