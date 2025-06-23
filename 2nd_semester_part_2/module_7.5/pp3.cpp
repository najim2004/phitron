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

int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

    int n = size(head);
    int middle = n / 2;

    Node *temp = head;
    if (n % 2 == 0)
    {
        for (int i = 0; i < middle - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
    }
    else
    {
        for (int i = 0; i < middle; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }

    return 0;
}
