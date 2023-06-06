#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int temp=v[0],counter=0,result=1;
    for (int i = 1; i < n; i++)
    {
            if (temp == v[i]) result++;
            else if (temp+1 == v[i])
            {
                counter+=result;
                temp = v[i];
                result = 1;
            }
            else
            {
                result = 1;
                temp = v[i];
            }    
    }
    
    cout<<counter;
    return 0;
}