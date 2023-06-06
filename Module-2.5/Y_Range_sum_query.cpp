#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q; cin>>n>>q;
    vector <long long int> v(n);
    vector <long long int> prefix(n);
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
        //Prefix value Input
        i==0 ? prefix[i]=v[i]:prefix[i]=prefix[i-1]+v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l,r; cin>>l>>r;
        //Printing
        l==1 ? cout<<prefix[r-1]<<endl:cout<<prefix[r-1]-prefix[l-2]<<endl;
    }

    return 0;
}