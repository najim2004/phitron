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
    Node *head1 = nullptr;
    Node *head2 = nullptr;
    while (
        true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head1, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head2, val);
    }
    if (size(head1) == size(head2))
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;

    return 0;
}