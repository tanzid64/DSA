#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void inputNode(Node * &head, int v)
{
    Node * newNode = new Node(v);
    if (head == NULL)
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

void duplicateValue(Node * head)
{
    Node * temp = head;
    bool flag = false;
    
    while (temp!= NULL)
    {
        for (Node *t = temp; t->next != NULL; t = t->next)
        {
            if(temp->value == t->next->value) flag = true;
            
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
    duplicateValue(head);
    return 0;
}