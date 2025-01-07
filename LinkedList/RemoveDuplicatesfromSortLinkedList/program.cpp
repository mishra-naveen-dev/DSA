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

Node *removeDuplicates(Node *head)
{
    unordered_set<int> st;
    Node *new_head = nullptr;
    Node *tail = nullptr;

    // traverse the original list

    Node *curr = head;
    while (curr != nullptr)
    {
        if (st.find(curr->data) == st.end())
        {
            // creates a new node for the new list
            Node *new_node = new Node(curr->data);

            // if new_head is null, then set new_head and tail to temp
            if (new_head == nullptr)
            {
                new_head = new_node;
                tail = new_head;
            }
            else
            {
                tail->next = new_node;
                tail = new_node;
            }
            st.insert(curr->data);
        }
        curr = curr->next;
    }
    return new_head;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(11);
    head->next = new Node(11);
    head->next->next = new Node(11);
    head->next->next->next = new Node(13);
    head->next->next->next->next = new Node(13);
    head->next->next->next->next->next = new Node(20);

    cout << "Linked list before duplicate removal:" << endl;
    printList(head);

    head = removeDuplicates(head);
    cout << "Linked list after duplicate removal: " << endl;
    printList(head);

    return 0;
}