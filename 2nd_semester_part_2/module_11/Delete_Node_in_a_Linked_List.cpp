/**
 * LeetCode Problem: Delete Node in a Linked List
 * Problem Link: https://leetcode.com/problems/delete-node-in-a-linked-list/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    void deleteNode(ListNode *node)
    {

        node->val = node->next->val;
        ListNode *deleteNode = node->next;
        node->next = node->next->next;
        delete deleteNode;
    }
};