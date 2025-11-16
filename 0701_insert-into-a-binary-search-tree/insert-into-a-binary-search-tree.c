/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* createNode(int val){
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if(!root) return createNode(val);
    if(val < root->val){
        if(root->left){
            root->left = insertIntoBST(root->left, val);
        }else{
            root->left = createNode(val);
        }
    }else{
        if(root->right){
            root->right = insertIntoBST(root->right, val);
        }else{
            root->right = createNode(val);
        }
    }
    return root;
}