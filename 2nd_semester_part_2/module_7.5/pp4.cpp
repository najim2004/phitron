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

int maxValue(Node *head)
{
    if (head == nullptr)
        return INT_MIN;
    int maxVal = head->val;
    Node *temp = head->next;
    while (temp != nullptr)
    {
        if (temp->val > maxVal)
            maxVal = temp->val;
        temp = temp->next;
    }
    return maxVal;
}

// int minValue(Node *head)
// {
//     if (head == nullptr)
//         return INT_MAX;
//     int minVal = head->val;
//     Node *temp = head->next;
//     while (temp != nullptr)
//     {
//         if (temp->val < minVal)
//             minVal = temp->val;
//         temp = temp->next;
//     }
//     return minVal;
// }

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
    cout << maxValue(head) << endl;

    return 0;
}