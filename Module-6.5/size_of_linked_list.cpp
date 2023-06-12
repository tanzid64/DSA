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
void inputNode(Node * &head, int v)
{
    Node * newNode = new Node(v);
    if(head == NULL) 
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
int main()
{
    Node * head = NULL;
    int counter = 0;
    while (true)
    {
        int v; cin>>v;
        if(v==-1) break;
        inputNode(head,v);
        counter++;
    }
    cout<<counter;
    return 0;
}