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
void min_max(Node *head)
{
    Node *tmp = head;
    int min = INT_MAX, max = INT_MIN;
    while (tmp != NULL)
    {
        if(tmp->value>max) max = tmp->value;
        if(tmp->value<min) min = tmp->value;
        tmp = tmp->next;
    }
    cout<<max<<" "<<min;
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
    min_max(head);
    return 0;
}