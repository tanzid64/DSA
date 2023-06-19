#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next;
        Node * prev;
    //Constructor
    Node (int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
int sizeOfDoublyLL(Node *head)
{
    Node *tmp = head;
    int counter = 0;
    while (tmp != NULL)
    {
        counter++;
        tmp = tmp->next;
    }
    return counter;
}
void insertAtPosition(Node *&head, Node *&tail, int pos, int value)
{
    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else if (pos == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    else if (pos==sizeOfDoublyLL(head))
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
void printDoublyLL(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void printrevDoublyLL(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int q; cin>>q;
    while (q--)
    {
        int position, value; cin>>position>>value;
        if (position > sizeOfDoublyLL(head)) cout<<"Invalid"<<endl;
        else
        {
            insertAtPosition(head, tail, position, value);
            printDoublyLL(head);
            printrevDoublyLL(tail);
        }
    }
    
    return 0;
}