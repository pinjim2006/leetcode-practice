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
    node->left = node->right = NULL;
    return node;
}

struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2) {
    if(!(root1 || root2)) return NULL;
    struct TreeNode* root = createNode(0);
    if(root1 && root2){
        root->val += root1->val;
        root->val += root2->val;
        root->left = mergeTrees(root1->left, root2->left);
        root->right = mergeTrees(root1->right, root2->right);
    }else if(root1){
        root->val += root1->val;
        root->left = mergeTrees(root1->left, NULL);
        root->right = mergeTrees(root1->right, NULL);
    }else{
        root->val += root2->val;
        root->left = mergeTrees(NULL, root2->left);
        root->right = mergeTrees(NULL, root2->right);
    }
    return root;
}