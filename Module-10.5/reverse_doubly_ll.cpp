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
void printReverse(Node *tail)
{
    Node *tmp = tail;
    while(tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->prev;
    }
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
    printReverse(tail);
    return 0;
}