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
void inputNode(Node * &head,int v)
{
    Node * newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node * temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}
void insertAtIndex (Node * &head,int pos,int v)
{
    Node * newNode = new Node(v);
    
    if (pos==0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node * temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    newNode->next=temp->next;
    temp->next = newNode;
    return;
}
void printLinkedList(Node * head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node * head = NULL;
    int counter = 0;
    
    while (true)
    {
        int v; cin>>v;
        if(v==-1) break;
        counter++;
        inputNode(head,v);
    }
    int q; cin>>q;
    while (q--)
    {
        int pos, v; cin>>pos>>v;
        if(pos>counter) cout<<"Invalid"<<endl;
        else
        {
            counter++;
            insertAtIndex(head,pos,v);
            printLinkedList(head);
            cout<<endl;
        }
    }
    return 0;
}