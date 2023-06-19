#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next;
    
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
int sizeOfNode(Node * head)
{
    Node * tmp = head;
    int counter = 0;
    while (tmp != NULL)
    {
        counter++;
        tmp = tmp->next;
    }
    return counter;
}
void sameToSame(Node *head_1, Node *head_2)
{
    if(sizeOfNode(head_1) != sizeOfNode(head_2))
    {
        cout<<"NO";
        return;
    }
    Node *tmp_1 = head_1, *tmp_2 = head_2;
    bool flag = true;
    while (tmp_1 != NULL)
    {
        if(tmp_1->value != tmp_2->value) 
        {
            flag = false;
            break;
        }
        tmp_1 = tmp_1->next;
        tmp_2 = tmp_2->next;
    }
    flag ? cout<<"YES" : cout<<"NO";
}

int main()
{
    Node *head_1 = NULL, *head_2 = NULL, *tail_1 = NULL, *tail_2 = NULL;
    while (true)
    {
        int value; cin>>value;
        if(value == -1) break;
        inputNode(head_1,tail_1,value);
    }

    while (true)
    {
        int value; cin>>value;
        if(value == -1) break;
        inputNode(head_2,tail_2,value);
    }

    sameToSame(head_1,head_2);
    
    return 0;
}