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
void inputNode (Node *&head, Node *&tail, int value) // TC = O(N);
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
void reversePrint(Node *head) // TC = O(N)
{
    Node *tmp = head;
    //base case
    if(tmp == NULL) return;
    reversePrint(tmp->next);
    cout<<tmp->value<<" ";
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
    reversePrint(head);
    return 0;
}