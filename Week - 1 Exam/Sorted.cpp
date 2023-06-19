#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector <int> v(n);
        
        bool flag=true;
        for(int i=0; i<n; i++) cin>>v[i];
        for(int i=1; i<n; i++)
        {
            if(v[i]<v[i-1])
            {
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}