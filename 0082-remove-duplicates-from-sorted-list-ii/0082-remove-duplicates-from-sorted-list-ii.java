class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        HashMap<Integer, Integer> map = new HashMap<>();

        ListNode temp = head;
        while (temp != null) {
            map.put(temp.val, map.getOrDefault(temp.val, 0) + 1);
            temp = temp.next;
        }

        ListNode dummy = new ListNode(0);
        ListNode tail = dummy;
        temp = head;
        while (temp != null) {
            if (map.get(temp.val) == 1) {
                tail.next = temp;
                tail = tail.next;
            }
            temp = temp.next;
        }

        tail.next = null;
        return dummy.next;
    }
}
