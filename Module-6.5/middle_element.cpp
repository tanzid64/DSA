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
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void middleElement(Node * head,int pos)
{
    Node * temp = head;
    for (int i = 1; i <= pos/2; i++)
    {
        if (pos%2==0 && i==pos/2) cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<temp->value;
}
int main()
{
    Node * head = NULL;
    int pos = 0;
    while (true)
    {
        int v; cin>>v;
        if(v==-1) break;
        pos++;
        inputNode(head,v);
    }
    middleElement(head,pos);
    return 0;
}