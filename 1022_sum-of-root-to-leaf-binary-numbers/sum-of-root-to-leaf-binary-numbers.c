/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isLeaf(struct TreeNode* node){
    return !(node->left || node->right);
}

void traversal(struct TreeNode* root, int current, int* result){
    if(!root) return;
    if(isLeaf(root)){
        current <<= 1;
        current += root->val;
        (*result) += current;
        return;
    }
    current <<= 1;
    current += root->val;
    traversal(root->left, current, result);
    traversal(root->right, current, result);
}

int sumRootToLeaf(struct TreeNode* root) {
    int result = 0;
    traversal(root, 0, &result);
    return result;
}