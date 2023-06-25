#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next;
        Node * pre;
    //Constructor
    Node (int value)
    {
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};
void inputLL(Node *&head, Node *&tail, int pos, int value)
{
    Node *newNode = new Node(value);
    if(pos == 0 && head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    if(pos == 0 && head != NULL)
    {
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}
void insertAnyPosition (Node *head, int pos,int value)
{
    Node *newNode = new Node(value), *tmp = head;

    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->pre = tmp;
    tmp->next = newNode;
    newNode->next->pre = newNode;

}
void printLL(Node *head)
{
    Node *tmp = head;
    cout<<"L -> ";
    while(tmp)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void printrev(Node *tail)
{
    Node *tmp = tail;
    cout<<"R -> ";
    while (tmp)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->pre;
    }
    cout<<endl;
}
int sizeofLL(Node *head)
{
    Node *tmp = head;
    int counter = 0;
    while (tmp)
    {
        counter++;
        tmp = tmp->next;
    }
    return counter;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int q; cin>>q;
    while (q--)
    {
        int pos, value; cin>>pos>>value;
        if(pos>sizeofLL(head)) cout<<"Invalid"<<endl;
        else if(pos != 0 && pos<sizeofLL(head))
        {
            insertAnyPosition(head,pos,value);
            printLL(head);
            printrev(tail);
        }
        else 
        {
            inputLL(head,tail,pos,value);
            printLL(head);
            printrev(tail);
        }
    }
    return 0;
}