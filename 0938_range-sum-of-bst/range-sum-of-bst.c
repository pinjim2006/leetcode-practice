/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void traversal(struct TreeNode* root, int* result, int low, int high){
    if(root->left){
        traversal(root->left, result, low, high);
    }
    if(root->val >= low && root->val <= high){
        (*result) += root->val;
    }
    if(root->right){
        traversal(root->right, result, low, high);
    }
}

int rangeSumBST(struct TreeNode* root, int low, int high) {
    int* result = (int*)malloc(sizeof(int));
    (*result) = 0;
    traversal(root, result, low, high);
    return *result;
}