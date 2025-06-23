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

void removeDuplicates(Node *&head)
{
    if (head == nullptr)
        return;
    unordered_set<int> seen;
    Node *current = head;
    Node *prev = nullptr;
    while (current != nullptr)
    {
        if (seen.find(current->val) != seen.end())
        {
            prev->next = current->next;
            delete current;
            current = prev->next;
        }
        else
        {
            seen.insert(current->val);
            prev = current;
            current = current->next;
        }
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
    cout << "\n";
}

int main()
{
    Node *head = nullptr, *tail = nullptr;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break; // Stop input on -1
        insertAtTail(head, tail, n);
    }
    removeDuplicates(head);
    printList(head);

    return 0;
}