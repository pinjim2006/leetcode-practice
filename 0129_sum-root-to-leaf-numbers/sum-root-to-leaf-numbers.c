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

int sumNum(struct TreeNode* root, int cur){
    if(!root) return 0;
    if(isLeaf(root)){
        cur *= 10;
        cur += root->val;
        return cur;
    }else{
        cur *= 10;
        cur += root->val;
        return sumNum(root->left, cur) + sumNum(root->right, cur);
    }
    return 0;
}

int sumNumbers(struct TreeNode* root) {
    return sumNum(root, 0);
}