/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if((p == NULL) ^ (q == NULL)) return false;
    if(p == NULL) return true;
    if(p->val != q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

void traversal(struct TreeNode* root, struct TreeNode* subRoot, bool* result){
    if(!root) return;
    if((*result)) return;
    if(root->val == subRoot->val){
        (*result) |= isSameTree(root, subRoot);
    }
    if(root->left) traversal(root->left, subRoot, result);
    if(root->right) traversal(root->right, subRoot, result);
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    bool result = false;
    traversal(root, subRoot, &result);
    return result;
}