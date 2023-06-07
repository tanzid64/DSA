#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector <int> a(n), b(n), c;
    //Input
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) cin>>b[i];
    c.insert(c.begin(),b.begin(),b.end());
    c.insert(c.end(),a.begin(), a.end());
    for (int x:c) cout<<x<<" ";
    return 0;
}
