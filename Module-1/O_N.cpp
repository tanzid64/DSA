#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) //O(n)
    {
        cin>>a[i];
    }
    int b = 0;
    for (int i = 0; i < n; i++) //O(n)
    {
        b += a[i];
    }
    cout<<b;
    return 0;
}
