/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void traversal(struct TreeNode* root, int* first, int* second){
    if(!root) return;
    if(root->val < (*first) || (*first) == -1){
        (*second) = (*first);
        (*first) = root->val;
    }else if(root->val != (*first) && (root->val < (*second) || (*second) == -1)){
        (*second) = root->val;
    }
    traversal(root->left, first, second);
    traversal(root->right, first, second);
}

int findSecondMinimumValue(struct TreeNode* root) {
    int first = -1;
    int second = -1;
    traversal(root, &first, &second);
    if(first == second || second == -1){
        return second;
    }else{
        return second;
    }
}