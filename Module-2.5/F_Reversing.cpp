#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    //Using Built In function
    // reverse(a.begin(),a.end());
    // for (int x:a) cout<<x<<" ";
    for (int i = n-1; i >=0; i--) cout<<a[i]<<" ";
    return 0;
}