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
void sortList(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
        return;

    Node *current = head;
    Node *nextNode = nullptr;

    while (current != nullptr)
    {
        nextNode = current->next;
        while (nextNode != nullptr)
        {
            if (current->val < nextNode->val)
            {
                swap(current->val, nextNode->val);
            }
            nextNode = nextNode->next;
        }
        current = current->next;
    }
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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
    sortList(head);
    printList(head);
    return 0;
}