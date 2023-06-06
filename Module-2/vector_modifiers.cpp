#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> x = {10,20,30,40,50};
    vector <int> y = {60,70,80,90,100};
    x = y;
    for (int i = 0; i < y.size(); i++)
    {
        cout<<x[i]<<" ";
    }
    
    return 0;
}