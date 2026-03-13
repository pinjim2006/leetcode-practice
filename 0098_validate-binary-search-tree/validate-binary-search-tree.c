/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void traversal(struct TreeNode* root, long biggest, long smallest, bool* result){
    if(!root) return;
    if(!(*result)) return;
    if((root->val >= biggest) || (root->val <= smallest)){
        (*result) = false;
        return;
    }
    traversal(root->left, root->val, smallest, result);
    traversal(root->right, biggest, root->val, result);
}

bool isValidBST(struct TreeNode* root) {
    bool result = true;
    traversal(root, LONG_MAX, LONG_MIN, &result);
    return result;
}