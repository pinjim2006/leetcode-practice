/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* cur1 = headA;
    struct ListNode* cur2 = headB;
    while(1){
        if(cur1 == cur2) return cur1;
        if(cur1->next == NULL && cur2->next == NULL) return NULL;
        if(cur1->next == NULL) cur1 = headB;
        else cur1 = cur1->next;
        if(cur2->next == NULL) cur2 = headA;
        else cur2 = cur2->next;
    }
}