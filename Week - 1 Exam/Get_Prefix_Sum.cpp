#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector <long long int> v(n),prefix(n);
    for (int i = 0; i < n; i++) 
    {
        cin>>v[i];
        if(i==0) prefix[0]=v[0];
        else prefix[i]=prefix[i-1]+v[i];
    }
    reverse(prefix.begin(),prefix.end());
    for(long long int x:prefix) cout<<x<<" ";
    
}