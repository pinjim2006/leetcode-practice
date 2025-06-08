/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode result = new ListNode(-101, head);
        ListNode current = head, current_1 = result;
        while (current != null){
            if(current.val == current_1.val){
                current_1.next = current.next;
                current = current.next;
            }else{
                current_1 = current;
                current = current.next;
            }
        }
        return result.next;
    }
}