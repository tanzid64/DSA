#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next;
        Node * prev;
    //Constructor
    Node (int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}
void palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    bool flag = true;
    while (i != j && i->prev != j)
    {
        if(i->value != j->value)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    flag ? cout<<"YES" : cout<<"NO";
}
int main()
{
    Node *head = NULL, *tail = NULL;
    while(true)
    {
        int value; cin>>value;
        if(value == -1) break;
        inputNode(head,tail,value);
    }
    palindrome(head, tail);
    return 0;
}