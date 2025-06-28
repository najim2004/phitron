/**
 * LeetCode Problem: Remove Linked List Elements
 * Problem Link: https://leetcode.com/problems/remove-linked-list-elements/
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

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int sz = size(head);
        int pos = sz - n;

        if (pos == 0)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        ListNode *curr = head;
        for (int i = 1; i < pos; i++)
        {
            curr = curr->next;
        }

        ListNode *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;

        return head;
    }
};
