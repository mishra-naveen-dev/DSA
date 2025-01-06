#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int n)
    {
        data = n;
        next = nullptr;
    }
};
Node *swapNodes(Node *head, int x, int y)
{
    if (x == y)
        return head;
    Node *prevX = nullptr, *currX = head;
    while (currX && currX->data != x)
    {
        prevX = currX;
        currX = currX->next;
    }
    Node *prevY = nullptr, *currY = head;
    while (currY && currY->data != y)
    {
        prevY = currY;
        currY = currY->next;
    }
    if (currX == nullptr || currY == nullptr)
        return head;
    if (prevX != nullptr)
        prevX->next = currY;
    else
        head = currY;
    if (prevY != nullptr)
        prevY->next = currX;
    else
        head = currX;
    Node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(15);
    head->next->next = new Node(12);
    head->next->next->next = new Node(13);
    head->next->next->next->next = new Node(20);
    head = swapNodes(head, 12, 20);

    while (head != nullptr)
    {
        cout << head->data << " ";
        if (head->next != nullptr)
            cout << " ";
        head = head->next;
    }
    cout << endl;
    return 0;
}