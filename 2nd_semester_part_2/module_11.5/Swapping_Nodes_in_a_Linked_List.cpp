/**
 * LeetCode Problem: Remove Nth Node From End of List
 * Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int size(ListNode *head)
    {
        int count = 0;
        while (head != nullptr)
        {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode *swapNodes(ListNode *head, int k)
    {
        int sz = size(head);
        int bPos = k, ePos = sz - k + 1;
        ListNode *curr = head, *temp1 = NULL, *temp2 = NULL;
        for (int i = 1; i <= sz; i++)
        {
            if (i == bPos)
                temp1 = curr;
            if (i == ePos)
                temp2 = curr;
            curr = curr->next;
        }
        swap(temp1->val, temp2->val);
        return head;
    }
};