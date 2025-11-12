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
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* buildTree(int* nums, int left, int right){
    if (left > right) return NULL;

    int maxIndex = left;
    for(int i = left +1; i <= right; i++){
        if(nums[i] > nums[maxIndex]){
            maxIndex = i;
        }
    }

    struct TreeNode* root = createNode(nums[maxIndex]);
    root->left = buildTree(nums, left, maxIndex - 1);
    root->right = buildTree(nums, maxIndex + 1, right);
    return root;
}

struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize) {
    return buildTree(nums, 0, numsSize - 1);
}