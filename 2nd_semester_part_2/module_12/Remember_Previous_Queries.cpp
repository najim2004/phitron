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
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == nullptr)
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

void deleteAtIndex(Node *&head, Node *&tail, int index)
{
    if (head == nullptr || index < 0)
        return;

    Node *current = head;
    for (int i = 0; i < index && current != nullptr; i++)
    {
        current = current->next;
    }

    if (current == nullptr)
        return;

    if (current->prev != nullptr)
    {
        current->prev->next = current->next;
    }
    else
    {
        head = current->next;
    }

    if (current->next != nullptr)
    {
        current->next->prev = current->prev;
    }
    else
    {
        tail = current->prev; // Deleting tail
    }

    delete current;
}

void printList(Node *head, Node *tail)
{
    Node *current = head;
    Node *current1 = tail;
    cout << "L -> ";
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
    cout << "R -> ";
    while (current1 != nullptr)
    {
        cout << current1->val << " ";
        current1 = current1->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr, *tail = nullptr;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insertAtHead(head, tail, v);
            printList(head, tail);
        }
        else if (x == 1)
        {
            insertAtTail(head, tail, v);
            printList(head, tail);
        }
        else if (x == 2)
        {
            deleteAtIndex(head, tail, v);
            printList(head, tail);
        }
    }

    return 0;
}