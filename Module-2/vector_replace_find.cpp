#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,4,5,2,3,2,4,2,5,5,2};
    //Replace
    // replace(v.begin(),v.end(),2,100);
    // for(int x:v ) cout<<x<<" ";

    //Find
    
    auto it = find(v.begin(),v.end(),3);
    if(it==v.end()) cout<<"Not Found";
    else cout<<"Found";
    return 0;
}