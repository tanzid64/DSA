#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> &st)
{
    stack <int> temp;
    while (!st.empty())
    {
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    st = temp;
}
int main()
{
    int n; cin>>n;
    stack <int> st;
    while (n--)
    {
        int x; cin>>x;
        st.push(x);
    }
    reverseStack(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}