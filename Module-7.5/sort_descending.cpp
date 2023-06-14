#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next;
    //Constructor
    Node (int value)
    {
        this->value = value;
        this->next = NULL;
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
    tail = newNode;
}
void printNode (Node *head)
{
    if(head == NULL) return;
    cout<<head->value<<" ";
    printNode(head->next);
}
void sortDescending(Node *head)
{
    for (Node* i = head; i->next != NULL; i = i->next)
    {
        for (Node * j = i->next; j != NULL; j = j->next)
        {
            if(i->value<j->value) swap(i->value,j->value);
        }
    }
    printNode(head);
}
int main()
{
    Node *head = NULL, *tail = NULL;
    while (true)
    {
        int value; cin>>value;
        if(value == -1) break;
        inputNode(head,tail,value);
    }
    sortDescending(head);
    return 0;
}