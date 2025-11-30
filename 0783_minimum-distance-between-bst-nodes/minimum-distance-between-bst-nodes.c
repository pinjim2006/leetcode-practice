/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int arr[101];
int top = -1;

void traversal(struct TreeNode* root){
    if(!root) return;
    traversal(root->left);
    arr[++top] = root->val;
    traversal(root->right);
}

int minDiffInBST(struct TreeNode* root) {
    top = -1;
    traversal(root);
    int minDiff = INT_MAX;
    for(int i = 0; i < top; i++){
        minDiff = (arr[i+1] - arr[i]) < minDiff ? (arr[i+1] - arr[i]) : minDiff;
    }
    return minDiff;
}