#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        this->data = x;
        this->next = nullptr;
    }
};

bool isPalindrome(Node *head)
{
    Node *currNode = head;
    stack<int> s;
    while (currNode != nullptr)
    {
        s.push(currNode->data);
        currNode = currNode->next;
    }
    while (head != nullptr)
    {
        int i = s.top();
        s.pop();
        if (head->data != i)
        {

            return false;
        }
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(20);
    head->next->next->next->next = new Node(10);

    bool result = isPalindrome(head);
    if (result)
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}