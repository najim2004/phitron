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

void tail_insert(Node *head, int val)
{
    Node *newNode = new Node(val);
    if (head = NULL)
    {
        head = newNode;
        return;
    }
    head->next = newNode;
    head = newNode;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int number;
        cin >> number;
        if (number == -1)
            break;
        tail_insert(head, number);
    }

    return 0;
}