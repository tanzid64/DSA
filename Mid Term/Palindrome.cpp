#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;

        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
void insert_list(Node* &head, Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode; 
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void palindrome(Node* &head,Node* &tail)
{
    Node* i=head;
    Node* j=tail;
    bool flag=true;
    while(i->val!=j->val && i->next->val !=j->val)
    {
        if(i->val!=j->val)
        {
            flag=false;
            break;
        }
        i=i->next;
        j=j->next;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO";
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    while(true)
    {
        cin>>value;
        if(value==-1) break;
        insert_list(head,tail,value);
    }
    palindrome(head,tail);
    return 0;
}