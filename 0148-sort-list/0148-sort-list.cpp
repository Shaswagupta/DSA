class Solution {
public:
    ListNode* sortList(ListNode* head) {

        vector<int> arr;

        ListNode* temp = head;

        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin(), arr.end());

        if (arr.empty())
            return nullptr;

        ListNode* newHead = new ListNode(arr[0]);
        ListNode* curr = newHead;

        for (int i = 1; i < arr.size(); i++) {
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }

        return newHead;
    }
};