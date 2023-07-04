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
    stack<int> st_1, st_2, st_3;
    int n,m; cin>>n;
    while (n--)
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
    if(st_1.size() != st_2.size()) cout<<"NO";
    else
    {
        bool flag = true;
        reverseStack(st_2);
        for (int i = 0; i < st_1.size(); i++)
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
    return 0;
}