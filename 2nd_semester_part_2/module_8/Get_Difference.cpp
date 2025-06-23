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

// Max function
int getMax(Node *head)
{
    int maxVal = INT_MIN;
    Node *temp = head;
    while (temp != nullptr)
    {
        maxVal = max(maxVal, temp->val);
        temp = temp->next;
    }
    return maxVal;
}

// Min function
int getMin(Node *head)
{
    int minVal = INT_MAX;
    Node *temp = head;
    while (temp != nullptr)
    {
        minVal = min(minVal, temp->val);
        temp = temp->next;
    }
    return minVal;
}

int main()
{
    ios_base::sync_with_stdio(false); // fast input
    cin.tie(NULL);

    Node *head = nullptr;
    Node *tail = nullptr;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, tail, val);
    }

    int difference = getMax(head) - getMin(head);
    cout << difference << "\n";

    return 0;
}
