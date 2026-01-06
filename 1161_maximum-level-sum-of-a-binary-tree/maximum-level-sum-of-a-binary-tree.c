/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxLevelSum(struct TreeNode* root) {
    int level = 1;
    int front = 0, rear = 0;
    int maxLevel = 1;
    int maxSum = root->val;
    struct TreeNode* queue[100000];
    queue[rear++] = root;
    while(rear > front){
        int n = rear - front;
        int sum = 0;
        for(int i = 0; i < n; i++){
            struct TreeNode* tmp = queue[front++];
            sum += tmp->val;
            if(tmp->left) queue[rear++] = tmp->left;
            if(tmp->right) queue[rear++] = tmp->right;
        }
        if(sum > maxSum){
            maxSum = sum;
            maxLevel = level;
        }
        level++;
    }
    return maxLevel;
}