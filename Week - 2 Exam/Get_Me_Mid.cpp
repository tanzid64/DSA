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
void inputLinkList(Node * &head, Node *&tail, int v)
{
    Node * newNode = new Node (v);
    if ( head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int sizeLinkList (Node * head)
{
    Node * tmp = head;
    int counter = 0;
    while (tmp != 0)
    {
        counter++;
        tmp = tmp->next;
    }
    return counter;
}
void sortLinkList(Node * &head)
{
    for (Node * i = head; i->next != NULL; i = i->next)
    {
        for (Node * j = i->next; j != NULL; j = j->next)
        {
            if(i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
        
    }
    
}
void printmiddle(Node * head, int p)
{
    if(p == 1)
    {
        cout<<head->value;
        return;
    }
    Node * tmp = head;//50 40-1 30(2) 20 10
    int middle = p/2; //2 
    for (int i = 1; i<middle ; i++)
    {
        tmp = tmp->next;
    }
    if (p %2 == 0)
    {
        cout<<tmp->value<<" "<<tmp->next->value;
    }
    else
    {
        cout<<tmp->next->value;
    }
}
void printlinklist(Node * head)
{
    if(head == NULL)
    {
        return;
    }
    cout<<head->value<<" ";
    printlinklist(head->next);
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int v;
    while (true)
    {
         cin>>v;
         if(v == -1)
         {
            break;
         }
        inputLinkList(head,tail,v);
    }
    int p = sizeLinkList(head);
    sortLinkList(head);
    //printlinklist(head);
    printmiddle(head, p);
    return 0;
}