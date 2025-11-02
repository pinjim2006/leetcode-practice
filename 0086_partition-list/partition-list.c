/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode lessHead;
    lessHead.next = NULL;
    struct ListNode* less = &lessHead;
    struct ListNode greatHead;
    greatHead.next = NULL;
    struct ListNode* great = &greatHead;
    struct ListNode* cur = head;
    while(cur){
        if(cur->val < x){
            less->next = cur;
            less = less->next;
        }else{
            great->next = cur;
            great = great->next;
        }
        cur = cur->next;
    }
    great->next = NULL;
    less->next = greatHead.next;
    head = lessHead.next;
    return head;
}