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
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void reversePrint(Node *head)
{
    if (head == nullptr)
        return;
    reversePrint(head->next);
    cout << head->val << " ";
}

int main()
{
    Node *head = nullptr;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }
    reversePrint(head);
    return 0;
}