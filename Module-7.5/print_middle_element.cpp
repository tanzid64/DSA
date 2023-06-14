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
void inputNode(Node *&head, Node *&tail, int value)
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
int sizeOfNode(Node *head)
{
    Node *tmp = head;
    int counter = 0;
    while(tmp != NULL)
    {
        counter++;
        tmp = tmp->next;
    }
    return counter;
}
void printMiddleElement (Node *head)
{
    Node *tmp = head;
    int middle = sizeOfNode(head)/2;
    for (int i = 1; i < middle; i++)
    {
        tmp = tmp->next;
    }
    middle %2 != 0 ? cout<<tmp->value<<" "<<tmp->next->value : cout<<tmp->next->value;
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
    printMiddleElement(head);
    return 0;
}