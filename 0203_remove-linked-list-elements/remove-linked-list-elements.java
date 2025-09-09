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
    public ListNode removeElements(ListNode head, int val) {
        ListNode result = new ListNode(-1, head);
        ListNode current = result;
        ListNode second = current.next;
        while(second != null){
            if(second.val != val){
                current.next = second;
                current = second;
                second = second.next;
            }else{
                second = second.next;
            }
        }
        current.next = second;
        return result.next;
    }
}