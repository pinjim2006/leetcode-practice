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

void postorder(struct TreeNode* ptr, int* returnSize, int* result){
    if(ptr){
        postorder(ptr->left, returnSize, result);
        postorder(ptr->right, returnSize, result);
        result[(*returnSize)++] = ptr->val;
    }
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(sizeof(int)*200);
    *returnSize = 0;
    postorder(root, returnSize, result);
    return result;
    
}