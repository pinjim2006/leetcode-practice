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
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null){
            return null;
        }
        int len = 0;
        ListNode count = head, tmp = head;
        while (count != null){
            tmp = count;
            count = count.next;
            len++;
        }
        tmp.next = head;
        ListNode result = head;
        for(int i = 0; i < len - (k%len); i++){
            tmp = result;
            result = result.next;
        }
        tmp.next = null;
        return result;

    }
}