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
int list_size(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count;
}
int get_value_by_index(Node *head, int index)
{
    int count = 0;
    Node *current = head;
    while (current != nullptr)
    {
        if (count == index)
            return current->val;
        count++;
        current = current->next;
    }
    return -1;
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
    int size = list_size(head);
    int mid = size / 2;
    if (size % 2 == 0)
    {
        int value1 = get_value_by_index(head, mid - 1);
        int value2 = get_value_by_index(head, mid);
        cout << value1 << " " << value2;
    }
    else
    {
        int value1 = get_value_by_index(head, mid);
        cout << value1;

        return 0;
    }
}