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
class myStack
{
    public:
        Node *head = NULL, *tail = NULL;
        int sz = 0;
        void push (int value)
        {
            Node *newNode = new Node (value);
            sz++;
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        void pop()
        {
            Node *deleteNode = tail;
            tail = deleteNode->prev;
            if(tail == NULL) head = NULL;
            else tail->next = NULL;
            delete deleteNode;
        }
        int top()
        {
            return tail->value;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz == 0) return true;
            else return false;
        }
};
void sameToSame(myStack st_1, myStack st_2, int n, int m)
{
    if(st_1.size()!= st_2.size())
    {
        cout<<"NO";
        return;
    }
    bool flag = true;
    for (int i = 1; i <= st_1.size(); i++)
    {
        if(st_1.top() != st_2.top())
        {
            flag = false;
            break;
        }
        st_1.pop(); st_2.pop();
    }
    flag ? cout<<"YES" : cout<<"NO";
}
using namespace std;
int main()
{
    myStack st_1, st_2;
    int n,m; cin>>n;
    while(n--)
    {
        int x; cin>>x;
        st_1.push(x);
    }
    cin>>m;
    while (m--)
    {
        int x; cin>>x;
        st_2.push(x);
    }
    sameToSame(st_1,st_2,n,m);
    return 0;
}