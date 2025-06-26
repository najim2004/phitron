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

void reverseList(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    if (i->next == j)
        swap(i->val, j->val);
}

void printList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
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
    reverseList(head, tail);
    printList(head);
    return 0;
}