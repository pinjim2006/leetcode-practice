/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* pre = &dummy;
    struct ListNode* cur = head;
    while(cur){
        if(cur->next && cur->val == cur->next->val){
            int val = cur->val;
            while(cur && val == cur->val){
                cur = cur->next;
            }
            pre->next = cur;
        }else{
            pre = pre->next;
            cur = cur->next;
        }
    }
    head = dummy.next;
    return head;
}