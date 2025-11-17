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

void traversal(struct TreeNode* root, int targetSum, int cur, bool* result){
    if(!root) return;
    if(*result) return;
    if(isLeaf(root)){
        cur += root->val;
        *result |= (cur == targetSum);
    }
    cur += root->val;
    traversal(root->left, targetSum, cur, result);
    traversal(root->right, targetSum, cur, result);
}

bool hasPathSum(struct TreeNode* root, int targetSum) {
    bool result = false;
    traversal(root, targetSum, 0, &result);
    return result;
}