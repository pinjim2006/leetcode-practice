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

void inorder(struct TreeNode* ptr, int* returnSize, int* result){
    if(ptr){
        inorder(ptr->left, returnSize, result);
        result[(*returnSize)++] = ptr->val;
        inorder(ptr->right, returnSize, result);
    }
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(sizeof(int)*200);
    *returnSize = 0;
    inorder(root, returnSize, result);
    return result;
}