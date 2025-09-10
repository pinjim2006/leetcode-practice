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
    public ListNode reverseList(ListNode head) {
        if(head == null || head.next == null) return head;
        ListNode nextNode = new ListNode(-1, head);
        ListNode current = nextNode.next;
        while(current != null){
            ListNode save = current.next;
            current.next = nextNode;
            nextNode = current;
            current = save;
        }
        head.next = null;
        return nextNode;
    }
}