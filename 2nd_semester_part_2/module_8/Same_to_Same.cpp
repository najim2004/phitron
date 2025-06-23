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

bool isSame(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != nullptr && temp2 != nullptr)
    {
        if (temp1->val != temp2->val)
            return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return (temp1 == nullptr && temp2 == nullptr);
}

int main()
{
    Node *head1 = nullptr, *tail1 = nullptr,
         *head2 = nullptr, *tail2 = nullptr;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insertAtTail(head1, tail1, n);
    }
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insertAtTail(head2, tail2, n);
    }
    if (isSame(head1, head2))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}