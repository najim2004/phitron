    /**
     * LeetCode Problem: Reverse Linked List
     * Problem Link: https://leetcode.com/problems/reverse-linked-list/
    * Definition for singly-linked list.
    * struct ListNode {
    *     int val;
    *     ListNode *next;
    *     ListNode() : val(0), next(nullptr) {}
    *     ListNode(int x) : val(x), next(nullptr) {}
    *     ListNode(int x, ListNode *next) : val(x), next(next) {}
    * };
    */
   class Solution {
    void reverseList(ListNode* &head, ListNode* curr){
        if(curr->next==nullptr){
        head=curr;
        return;
        }
        reverseList(head, curr->next);
        curr->next->next=curr;
        curr->next=nullptr;
    }


public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr) return head;
        reverseList(head, head);
        return head;
    }
};