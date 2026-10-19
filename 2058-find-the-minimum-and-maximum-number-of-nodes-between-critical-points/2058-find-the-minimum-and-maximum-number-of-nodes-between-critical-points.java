import java.util.ArrayList;

class Solution {
    public int[] nodesBetweenCriticalPoints(ListNode head) {

        ArrayList<Integer> arr = new ArrayList<>();

        ListNode prev = head;
        ListNode temp = head.next;

        int index = 2;

        while (temp.next != null) {

            if ((prev.val < temp.val && temp.val > temp.next.val) ||
                    (prev.val > temp.val && temp.val < temp.next.val)) {

                arr.add(index);
            }

            prev = temp;
            temp = temp.next;
            index++;
        }

        if (arr.size() < 2) {
            return new int[] { -1, -1 };
        }

        int min = Integer.MAX_VALUE;

        for (int i = 1; i < arr.size(); i++) {
            min = Math.min(min, arr.get(i) - arr.get(i - 1));
        }

        int max = arr.get(arr.size() - 1) - arr.get(0);

        return new int[] { min, max };
    }
}