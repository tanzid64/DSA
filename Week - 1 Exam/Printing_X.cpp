#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int m=(n/2)+1;
    //Printing
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            //Back Slash
            if (i==j && i!=m) cout<<"\\";
            //Middle X
            else if (i==j && i==m) cout<<"X";
            //Back Slash
            else if (j==n-i+1 && i!=m) cout<<"/";
            //Space
            else cout<<" ";
        }
        //Line Gap
        cout<<endl; 
    }
    return 0;
}