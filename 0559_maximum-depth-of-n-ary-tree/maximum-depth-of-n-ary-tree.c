/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */
#define max(a,b) (a)>(b)?(a):(b)

void traversal(struct Node* root, int cur, int* depth){
    cur++;
    if(root->numChildren == 0){
        (*depth) = max(cur, (*depth));
    }else{
        for(int i = 0; i < root->numChildren; i++){
            traversal(root->children[i], cur, depth);
        }
    }
}

int maxDepth(struct Node* root) {
    int depth = 0;
    if(!root) return depth;
    traversal(root, 0, &depth);
    return depth;
}