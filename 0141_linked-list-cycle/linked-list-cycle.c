/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* p = head;
    struct ListNode* fast = p;
    while(fast && fast->next){
        p = p->next;
        fast = fast->next->next;
        if(p == fast){
            return true;
        }
    }
    return false;
}