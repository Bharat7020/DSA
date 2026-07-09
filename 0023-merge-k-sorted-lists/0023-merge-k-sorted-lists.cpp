class Solution {
public:

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (l1 && l2) {

            if (l1->val <= l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }

            tail = tail->next;
        }

        if (l1)
            tail->next = l1;
        else
            tail->next = l2;

        return dummy.next;
    }

    ListNode* solve(vector<ListNode*>& lists, int left, int right) {

        if (left > right)
            return nullptr;

        if (left == right)
            return lists[left];

        int mid = left + (right - left) / 2;

        ListNode* l1 = solve(lists, left, mid);
        ListNode* l2 = solve(lists, mid + 1, right);

        return mergeTwoLists(l1, l2);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.empty())
            return nullptr;

        return solve(lists, 0, lists.size() - 1);
    }
};