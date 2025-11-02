/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode* left, struct ListNode* right){
    struct ListNode* pre = right->next;
    struct ListNode* cur = left;
    struct ListNode* next = cur->next;
    while(cur != right){
        cur->next = pre;
        pre = cur;
        cur = next;
        next = cur->next; 
    }
    cur->next = pre;
    return cur;
}

struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(left == right) return head;
    struct ListNode* pre = NULL;
    struct ListNode* cur = head;
    struct ListNode* leftNode = NULL;
    struct ListNode* rightNode = NULL;
    int count = 1;
    while(!(leftNode && rightNode)){
        if(left == count){
            leftNode = cur;
        }
        if(right == count){
            rightNode = cur;
        }
        if(!leftNode) pre = cur;
        cur = cur->next;
        count++;
        
    }
    if(left != 1){
        pre->next = reverse(leftNode, rightNode);
    }else{
        head = reverse(leftNode, rightNode);
    }

    return head;
}