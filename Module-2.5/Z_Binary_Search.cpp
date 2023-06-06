#include<bits/stdc++.h>
using namespace std;
int search(int l,int r, int x,int v[]) 
{
    while (l<=r)
    {
       int mid = l+(r-l)/2;
       if(v[mid]==x) return mid;
       else if (v[mid]<x) l=mid+1;
       else r = mid - 1;
    }
    return -1;
}
int main()
{
    int n,q; cin>>n>>q;
    int v[n];
    for(int i =0;i<n;i++) cin>>v[i];
    sort(v,v+n);
    while(q--)
    {
        int x; cin>>x;
        int found = search(0,n-1,x,v);
        found != -1 ? cout<<"found"<<endl:cout<<"not found"<<endl;
    }
    return 0;
}