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

void print_list(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}
bool insert_at_position(Node *&head, int position, int value)
{
    Node *newNode = new Node(value);
    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return true;
    }
    Node *current = head;
    for (int i = 0; i < position - 1; i++)
    {
        current = current->next;
        if (current == nullptr)
        {
            cout << "Invalid" << endl;
            return false;
        }
    }
    newNode->next = current->next;
    current->next = newNode;
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
    cin >> q;
    while (q--)
    {
        int position, value;
        cin >> position >> value;
        if (insert_at_position(head, position, value))
            print_list(head);
    }
}