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
    public ListNode mergeKLists(ListNode[] lists) {
       ArrayList<Integer> arr = new ArrayList<>();
       for(ListNode head : lists){
        ListNode temp = head; 
          while (temp != null){
           arr.add(temp.val);
           temp = temp.next;
       }
       }
       Collections.sort(arr);
        ListNode dummy = new ListNode(0);
        ListNode temp = dummy;
        for(int x : arr){
            temp.next = new ListNode(x);
            temp = temp.next;
        }
    return dummy.next;}
};