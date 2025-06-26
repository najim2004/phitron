#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev, *next;

    Node(int val)
    {
        this->val = val;
        this->prev = this->next = nullptr;
    }
};

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (!head)
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

void printList(Node *head)
{
    for (Node *cur = head; cur != nullptr; cur = cur->next)
        cout << cur->val << " ";
    cout << endl;
}

void sortList(Node *&head, Node *&tail)
{
    if (!head || !head->next)
        return;

    Node *curr = head->next;
    while (curr)
    {
        Node *nextNode = curr->next;
        Node *scan = curr->prev;

        // If already in correct position, just continue
        if (scan->val <= curr->val)
        {
            curr = nextNode;
            continue;
        }

        // Remove curr from current position
        if (curr->prev)
            curr->prev->next = curr->next;
        if (curr->next)
            curr->next->prev = curr->prev;
        if (curr == tail)
            tail = curr->prev;

        // Find correct position from head
        Node *pos = head;
        while (pos && pos->val < curr->val)
            pos = pos->next;

        // Insert before pos
        if (pos == head)
        {
            curr->next = head;
            head->prev = curr;
            curr->prev = nullptr;
            head = curr;
        }
        else
        {
            Node *before = pos->prev;
            before->next = curr;
            curr->prev = before;
            curr->next = pos;
            if (pos)
                pos->prev = curr;
        }

        curr = nextNode;
    }

    // Update tail (in case it changed)
    Node *tmp = head;
    while (tmp->next)
        tmp = tmp->next;
    tail = tmp;
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
    sortList(head, tail);
    printList(head);

    return 0;
}