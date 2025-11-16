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

void inorder(struct TreeNode* root, int* leafs, int* size){
    if(!root) return;
    if(isLeaf(root)){
        leafs[(*size)++] = root->val;
        return;
    }
    
    inorder(root->left, leafs, size);
    inorder(root->right, leafs, size);
    
}

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    int leafs1[200];
    int size1 = 0;
    int leafs2[200];
    int size2 = 0;
    inorder(root1, leafs1, &size1);
    inorder(root2, leafs2, &size2);

    if(size1 != size2) return false;
    for(int i = 0; i < size1; i++){
        if(leafs1[i] != leafs2[i]) return false;
    }
    return true;
}