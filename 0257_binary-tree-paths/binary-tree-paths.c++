/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> result;

    bool isLeaf(TreeNode* node){
        return (node->left == NULL) && (node->right == NULL);
    }

    void preorder(TreeNode* root, string s){
        s += to_string(root->val);

        if(isLeaf(root)){
            result.push_back(s);
            return;
        }

        s += "->";

        if(root->left){
            preorder(root->left, s);
        }
        if(root->right){
            preorder(root->right, s);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        preorder(root, s);
        return result;
    }
};