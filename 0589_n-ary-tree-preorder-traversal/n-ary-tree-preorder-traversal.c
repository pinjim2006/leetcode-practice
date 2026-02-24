/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void preorderTraversal(struct Node* root, int* returnSize, int* result){
    result[(*returnSize)++] = root->val;
    for(int i = 0; i < root->numChildren; i++){
        preorderTraversal(root->children[i], returnSize, result);
    }
}

int* preorder(struct Node* root, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 10000);
    (*returnSize) = 0;
    if(!root) return result;
    preorderTraversal(root, returnSize, result);
    return result;
}