/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    (*returnSize) = 0;
    if(!root) return NULL;

    int **result = (int**)malloc(sizeof(int*) * 10000);
    *returnColumnSizes = (int*)malloc(sizeof(int) * 10000);

    struct TreeNode* queue[2010];
    int rear = 0, front = 0;
    queue[rear++] = root;

    while(front < rear){
        (*returnColumnSizes)[(*returnSize)] = rear - front;
        result[*returnSize] = (int*)malloc(sizeof(int) * (*returnColumnSizes)[(*returnSize)]);
        for(int i = 0; i < (*returnColumnSizes)[(*returnSize)]; i++){
            result[(*returnSize)][i] = queue[front]->val;
            if(queue[front]->left) queue[rear++] = queue[front]->left;
            if(queue[front]->right) queue[rear++] = queue[front]->right;
            front++;
        }
        (*returnSize)++;
    }
    return result;
}