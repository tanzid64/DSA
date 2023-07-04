#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> p,q;
    int n; cin>>n;
    while (n--)
    {
        int x; cin>>x;
        q.push(x);
    }
    stack <int> st;
    while (!q.empty())
    {
        int x = q.front();
        st.push(x);
        q.pop();
    }
    while (!st.empty())
    {
        int x = st.top();
        st.pop();
        p.push(x);
    }
    while (!p.empty())
    {
        cout<<p.front()<<" ";
        p.pop();
    }
    return 0;
}