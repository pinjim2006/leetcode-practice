/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* createNode(int val){
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* mergeNodes(struct ListNode* head) {
    int tmp = 0;
    struct ListNode* cur = head->next;
    struct ListNode* result = createNode(-1);
    struct ListNode* curResult = result;
    while(cur){
        if(cur->val == 0){
            curResult->next = createNode(tmp);
            curResult = curResult->next;
            tmp = 0;
        }else{
            tmp += cur->val;
        }
        cur = cur->next;
    }
    return result->next;
}