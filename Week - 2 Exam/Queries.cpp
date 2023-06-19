#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertatposition(Node *&head, Node *&tail,int v, int x)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else if(x==0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    head->next = newNode;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    

    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        int v;
        cin>>v;
        insertatposition(head,tail,v,x);
        cout<<head->val<<" "<<tail->val<<endl;
    }

    return 0;
}