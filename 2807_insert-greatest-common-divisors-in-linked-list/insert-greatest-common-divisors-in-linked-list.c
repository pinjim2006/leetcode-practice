/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int GCD(int a, int b){
    int big = a > b ? a : b;
    int small = a < b ? a : b;
    while(big % small){
        int tmp = big % small;
        big = small;
        small = tmp;
    }
    return small;
}

struct ListNode* createNode(int val){
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct ListNode* node, int val){
    struct ListNode* newNode = createNode(val);
    newNode->next = node->next;
    node->next = newNode;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* cur = head;
    while(cur->next){
        insertNode(cur, GCD(cur->val, cur->next->val));
        cur = cur->next->next;
    }
    return head;
}