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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode temp = list1;
        int count = 0;
        while (count != a -1) {
            count += 1;
            temp = temp.next;
        }
        ListNode after = temp;
        while (count != b + 1) {
            count += 1;
            after = after.next;
        }
        temp.next = list2;
        ListNode last = list2;
        while (last.next != null) {
            last = last.next;
        }
        last.next = after;
        return list1;
    }
}