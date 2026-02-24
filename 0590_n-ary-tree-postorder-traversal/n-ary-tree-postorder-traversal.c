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
void postorderTraversal(struct Node* root, int* returnSize, int* result){
    for(int i = 0; i < root->numChildren; i++){
        postorderTraversal(root->children[i], returnSize, result);
    }
    result[(*returnSize)++] = root->val;
}

int* postorder(struct Node* root, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 10000);
    (*returnSize) = 0;
    if(!root) return result;
    postorderTraversal(root, returnSize, result);
    return result;
}