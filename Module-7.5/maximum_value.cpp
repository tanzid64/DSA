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
void printMaximum (Node *head)
{
    Node *tmp = head;
    int maximum = INT_MIN;
    while (tmp != NULL)
    {
        if(tmp->value > maximum) maximum = tmp->value;
        tmp = tmp->next;
    }
    cout<<maximum;
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
    printMaximum(head);
    return 0;
}