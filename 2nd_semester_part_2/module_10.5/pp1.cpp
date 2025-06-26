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

bool areSame(Node *head1, Node *head2)
{
    Node *current1 = head1;
    Node *current2 = head2;

    while (current1 != nullptr && current2 != nullptr)
    {
        if (current1->val != current2->val)
            return false;

        current1 = current1->next;
        current2 = current2->next;
    }

    return current1 == nullptr && current2 == nullptr;
}

int main()
{
    Node *head1 = nullptr, *tail1 = nullptr;
    Node *head2 = nullptr, *tail2 = nullptr;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;

        insertAtTail(head1, tail1, val);
    }
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;

        insertAtTail(head2, tail2, val);
    }
    areSame(head1, head2) ? cout << "YES" : cout << "NO" << endl;

    return 0;
}