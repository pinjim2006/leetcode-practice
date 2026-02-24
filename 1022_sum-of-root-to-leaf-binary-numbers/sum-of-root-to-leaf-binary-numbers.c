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

void traversal(struct TreeNode* root, int* ans, int cur){
    cur <<= 1;
    cur |= root->val;
    if(isLeaf(root)){
        (*ans) += cur;
    }
    if(root->left) traversal(root->left, ans, cur);
    if(root->right) traversal(root->right, ans, cur);
}

int sumRootToLeaf(struct TreeNode* root) {
    int ans = 0;
    traversal(root, &ans, 0);
    return ans;
}