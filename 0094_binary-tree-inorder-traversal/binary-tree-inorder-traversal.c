/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void traversal(struct TreeNode* root, int* result, int* returnSize){
    if(!root) return;
    traversal(root->left, result, returnSize);
    result[(*returnSize)] = root->val;
    (*returnSize)++;
    traversal(root->right, result, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(sizeof(int)*101);
    (*returnSize) = 0;
    traversal(root, result, returnSize);
    return result;
}