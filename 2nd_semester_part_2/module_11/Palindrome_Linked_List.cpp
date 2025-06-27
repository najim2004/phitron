/**
 * LeetCode Problem: 234. Palindrome Linked List
 * Problem Link: https://leetcode.com/problems/palindrome-linked-list/
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
    void insertAtTail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void reverseList(ListNode *&head, ListNode *curr)
    {
        if (curr->next == nullptr)
        {
            head = curr;
            return;
        }
        reverseList(head, curr->next);
        curr->next->next = curr;
        curr->next = nullptr;
    }
    bool isPalindrome(ListNode *head)
    {
        ListNode *newHead = nullptr, *newTail = nullptr, *curr = head;
        while (curr != nullptr)
        {
            insertAtTail(newHead, newTail, curr->val);
            curr = curr->next;
        }
        reverseList(newHead, newHead);
        curr = head;
        ListNode *curr1 = newHead;
        while (curr != nullptr)
        {
            if (curr->val != curr1->val)
            {
                return false;
            }
            curr = curr->next;
            curr1 = curr1->next;
        }
        return true;
    }
};