/**
 * LeetCode Problem: Middle of the Linked List
 * Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/
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
        ListNode *curr = head;
        int count = 0;
        while (curr != nullptr)
        {
            curr = curr->next;
            count++;
        }
        return count;
    }
    ListNode *middleNode(ListNode *head)
    {
        int sz = size(head);
        ListNode *curr = head;
        for (int i = 0; i < sz / 2; i++)
        {
            curr = curr->next;
        }
        return curr;
    }
};