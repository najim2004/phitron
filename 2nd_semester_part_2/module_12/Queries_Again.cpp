#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = this->next = nullptr;
    }
};
bool insertAtIndex(Node *&head, Node *&tail, int index, int val)
{
    Node *newNode = new Node(val);
    if (index == 0)
    {
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else
    {
        Node *current = head;
        for (int i = 0; i < index - 1 && current != nullptr; i++)
        {
            current = current->next;
        }
        if (current == nullptr)
        {
            delete newNode;
            return false;
        }
        newNode->next = current->next;
        if (current->next != nullptr)
        {
            current->next->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        current->next = newNode;
        newNode->prev = current;
    }
    return true;
}
int main()
{
    Node *head = nullptr, *tail = nullptr;
    int q;
    cin >> q;
    while (q--)
    {
        int index, val;
        cin >> index >> val;
        if (insertAtIndex(head, tail, index, val))
        {
            Node *temp = head, *temp1 = tail;
            cout << "L -> ";
            while (temp != nullptr)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl;
            cout << "R -> ";
            while (temp1 != nullptr)
            {

                cout << temp1->val << " ";
                temp1 = temp1->prev;
            }
            cout << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}