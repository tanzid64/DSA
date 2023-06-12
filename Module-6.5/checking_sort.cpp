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
void ascendingSort(Node * head)
{
    Node * temp = head;
    bool flag = true;
    while (temp->next!=NULL) //As we are checking next element too, so we do not need to access last element.
    {
        if(temp->value>temp->next->value)
        {
            flag = false;
            break;
        }
        temp = temp->next;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}
int main()
{
    Node * head = NULL;
    
    while (true)
    {
        int v; cin>>v;
        if(v==-1) break;
        inputNode(head,v);
    }
    ascendingSort(head);
    return 0;
}