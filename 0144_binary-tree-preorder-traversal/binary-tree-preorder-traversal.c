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
void preorder(struct TreeNode* ptr, int* returnSize, int* result){
    if(ptr){
        result[(*returnSize)++] = ptr->val;
        preorder(ptr->left, returnSize, result);
        preorder(ptr->right, returnSize, result);
    }
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(sizeof(int)*200);
    *returnSize = 0;
    preorder(root, returnSize, result);
    return result;
    
}