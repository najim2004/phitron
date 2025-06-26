#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = this->next = nullptr;
    }
};
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

bool isPalindrome(Node *head, Node *tail)
{
    Node *left = head;
    Node *right = tail;

    while (left != right && left->next != right)
    {
        if (left->val != right->val)
            return false;
        left = left->next;
        right = right->prev;
    }
    if (left->next == right)
        return left->val == right->val;

    return true;
}

int main()
{
    Node *head = nullptr, *tail = nullptr;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;

        insertAtTail(head, tail, val);
    }
    isPalindrome(head, tail) ? cout << "YES" : cout << "NO" << endl;
    return 0;
}