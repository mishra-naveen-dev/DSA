#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node *getIntersectionNode(Node *head1, Node *head2)
{
    while (head2 != nullptr)
    {
        Node *temp = head1;
        while (temp)
        {
            if (head2 == temp)

                return head2;

            temp = temp->next;
        }
        head2 = head2->next;
    }
    return nullptr;
}

int main()
{
    Node *head1 = new Node(10);
    head1->next = new Node(15);
    head1->next->next = new Node(30);
    Node *head2 = new Node(3);
    head2->next = new Node(6);
    head2->next->next = new Node(9);
    head2->next->next->next = head1->next;

    Node *result = getIntersectionNode(head1, head2);

    if (result != NULL)
    {
        cout << result->data;
    }
    else
    {
        cout << "No intersection point";
    }

    return 0;
}