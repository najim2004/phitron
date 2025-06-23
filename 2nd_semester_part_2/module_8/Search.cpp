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

// Eta new tail-friendly insert function
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
int findIndex(Node *head, int val)
{
    Node *temp = head;
    int index = 0;
    while (temp != nullptr)
    {
        if (temp->val == val)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1; // Return -1 if not found
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = nullptr, *tail = nullptr;
        int n;
        while (true)
        {
            cin >> n;
            if (n == -1)
                break;
            insertAtTail(head, tail, n);
        }
        cin >> n;
        int index = findIndex(head, n);
        cout << index << endl;
    }

    return 0;
}