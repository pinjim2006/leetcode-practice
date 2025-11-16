/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int countLeft(struct TreeNode* root){
    int result = 0;
    while(root){
        result++;
        root = root->left;
    }
    return result;
}

int countRight(struct TreeNode* root){
    int result = 0;
    while(root){
        result++;
        root = root->right;
    }
    return result;
}

int countNodes(struct TreeNode* root) {
    if(!root) return 0;
    int leftHeight = countLeft(root);
    int rightHeight = countRight(root);
    if(leftHeight == rightHeight){
        return (1 << rightHeight) - 1;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}