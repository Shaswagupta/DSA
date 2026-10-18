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
    public int getDecimalValue(ListNode head) {
        ArrayList<Integer> list = new ArrayList<>();

        ListNode temp = head;

        while (temp != null) {
            list.add(temp.val);
            temp = temp.next;
        }
        int add = 0 ;
        int count = 0 ;
        for (int i = list.size() -1 ; i >= 0 ; i--){
            add += list.get(i) * Math.pow(2, count) ;
            count ++ ;  
        }
    return add;}
}