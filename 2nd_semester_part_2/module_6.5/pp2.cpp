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

bool isDuplicate(Node *head)
{
    bool seen[101] = {false};
    Node *current = head;
    while (current != NULL)
    {
        if (seen[current->val])
            return true;
        seen[current->val] = true;
        current = current->next;
    }
    return false;
}

int main()
{
    Node *head = nullptr;
    while (true)
    {
        int number;
        cin >> number;
        if (number == -1)
            break;
        tail_insert(head, number);
    }
    isDuplicate(head) ? cout << "YES" : cout << "NO";
    return 0;
}