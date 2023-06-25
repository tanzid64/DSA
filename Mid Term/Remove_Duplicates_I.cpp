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
void sortLL(Node *&head)
{
    Node *tmp = head;
    for (Node * i = tmp; i->next != NULL; i = i->next)
    {
        for (Node * j = i->next; j != NULL; j = j->next)
        {
            if(i->value > j->value) swap(i->value,j->value);
        }
    }
}
void duplicateLL(Node *&head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->value == tmp->next->value) tmp->next = tmp->next->next;
        if(tmp->next == NULL) break;
        else if(tmp->value!= tmp->next->value) tmp = tmp->next;
    }
}
void printLL(Node *head)
{
    Node *tmp = head;
    while(tmp)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
}
int main()
{
    Node * head = NULL, *tail = NULL;
    while (true)
    {
        int value; cin>>value;
        if(value == -1) break;
        inputNode(head,tail,value);
    }
    sortLL(head);
    duplicateLL(head);
    printLL(head);
    return 0;
}