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
void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
int main()
{
    Node *head = nullptr, *tail = nullptr;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        insert(head, tail, x);
    }
    Node *left = head, *right = tail;
    bool isPalindrome = true;
    while (left != nullptr && right != nullptr && left != right && left->prev != right)
    {
        if (left->val != right->val)
        {
            isPalindrome = false;
            break;
        }
        left = left->next;
        right = right->prev;
    }
    isPalindrome ? cout << "YES" : cout << "NO";
    return 0;
}