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

void tail_insert(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}

bool isSorted(Node *head, int order = 1)
{
    Node *current = head;
    while (current->next != nullptr)
    {
        if (order >= 0 && current->val > current->next->val)
            return false;
        else if (order < 0 && current->val < current->next->val)
            return false;
        current = current->next;
    }
    return true;
}

int main()
{
    int q;
    Node *head = nullptr;
    while (true)
    {
        int number;
        cin >> number;
        if (number == -1)
            break;
        tail_insert(head, number);
    }
    if (isSorted(head))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}