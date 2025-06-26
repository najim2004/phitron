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

bool insertAtIndex(Node *&head, Node *&tail, int val, int index)
{
    Node *newNode = new Node(val);
    if (index == 0)
    {
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
    else
    {
        Node *current = head;
        for (int i = 0; i < index - 1 && current != nullptr; i++)
        {
            current = current->next;
        }
        if (current == nullptr)
        {

            delete newNode;
            return false;
        }
        newNode->next = current->next;
        if (current->next != nullptr)
        {
            current->next->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        current->next = newNode;
        newNode->prev = current;
    }
    return true;
}
void printList(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i != nullptr)
    {
        cout << i->val << " ";
        i = i->next;
    }
    cout << endl;
    while (j != nullptr)
    {
        cout << j->val << " ";
        j = j->prev;
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
        int val, index;
        cin >> index >> val;
        if (!insertAtIndex(head, tail, val, index))
            cout << "Invalid" << endl;
        else
            printList(head, tail);
    }

    return 0;
}