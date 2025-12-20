/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(!root) return 0;
    struct TreeNode* queue[100001];
    int front = 0, rear = 0;
    int depth = 0;
    queue[rear++] = root;
    while(rear > front){
        int n = rear - front;
        depth++;
        for(int i = 0; i < n; i++){
            if(queue[front]->left) queue[rear++] = queue[front]->left;
            if(queue[front]->right) queue[rear++] = queue[front]->right;
            front++;
        }
    }
    return depth;
    
}