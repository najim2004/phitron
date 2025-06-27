/**
 * LeetCode Problem: Remove Duplicates from Sorted List
 * Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *curr = head;
        while (curr->next != nullptr)
        {
            if (curr->val == curr->next->val)
            {
                curr->next = curr->next->next;
            }
            else if (curr->val != curr->next->val)
            {
                curr = curr->next;
            }
        }
        return head;
    }
};