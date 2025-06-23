#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = tail = newNode; // First node
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = tail = newNode; // First node
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteAtIndex(Node *&head, Node *&tail, int index)
{
    if (index < 0 || head == nullptr)
    {
        return;
    }

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head == nullptr)
            tail = nullptr;
        return;
    }

    Node *current = head;
    for (int i = 0; i < index - 1 && current != nullptr; i++)
    {
        current = current->next;
    }

    if (current == nullptr || current->next == nullptr)
    {
        return;
    }

    Node *temp = current->next;
    current->next = temp->next;

    if (temp == tail)
        tail = current;

    delete temp;
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
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
            printList(head);
        }
        else if (x == 1)
        {
            insertAtTail(head, tail, v);
            printList(head);
        }
        else if (x == 2)
        {
            deleteAtIndex(head, tail, v);
            printList(head);
        }
        else
        {
            printList(head);
            continue;
        }
    }

    return 0;
}