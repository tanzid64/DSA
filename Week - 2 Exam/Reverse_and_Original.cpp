#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next;
    
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
void reversePrint(Node *head)
{
    if(head == NULL) return;
    reversePrint(head->next);
    cout<<head->value<<" ";
}
void llPrint(Node *head)
{
    if(head == NULL) return;
    cout<<head->value<<" ";
    llPrint(head->next);
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
    reversePrint(head);
    cout<<endl;
    llPrint(head);
    return 0;
}