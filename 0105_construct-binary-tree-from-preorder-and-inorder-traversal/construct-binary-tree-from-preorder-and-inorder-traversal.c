/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* createNode(int val){
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct TreeNode* builder(int preStart, int preorderSize, int inStart, int inEnd, int* preorder, int* inorder){
    if(preStart >= preorderSize) return NULL;
    if(inStart > inEnd) return NULL;
    struct TreeNode* root = createNode(preorder[preStart]);
    int index;
    for(int i = inStart; i <= inEnd; i++){
        if(inorder[i] == root->val){
            index = i;
        }
    }
    root->left = builder(preStart+1, preorderSize, inStart, index-1, preorder, inorder);
    root->right = builder(preStart+index-inStart+1, preorderSize, index+1, inEnd, preorder, inorder);
    return root;
}

struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
    return builder(0, preorderSize, 0, inorderSize-1, preorder, inorder);
}