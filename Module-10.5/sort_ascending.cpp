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
void inputNode (Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void sortDLL(Node *head)
{
    for (Node * i = head; i->next != NULL; i = i->next)
    {
        for (Node * j = i->next; j != NULL; j = j->next)
        {
            if (i->value>j->value) swap(i->value,j->value);
        }
    }  
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
int main()
{
    Node *head = NULL, *tail = NULL;
    while(true)
    {
        int value; cin>>value;
        if(value == -1) break;
        inputNode(head,tail,value);
    }
    sortDLL(head);
    printDoublyLL(head);
    return 0;
}