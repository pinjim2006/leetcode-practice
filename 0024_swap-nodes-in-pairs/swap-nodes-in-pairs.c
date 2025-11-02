/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* pre = &dummy;
    struct ListNode* cur = head;
    struct ListNode* next = NULL;
    while(cur && cur->next){
        next = cur->next->next;
        pre->next = cur->next;
        cur->next->next = cur;
        cur->next = next;
        pre = cur;
        cur = next;
    }
    head = dummy.next;
    return head;
    
}