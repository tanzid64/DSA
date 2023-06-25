#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> myList;
    while (true)
    {
        int value; cin>>value;
        if(value == -1) break;
        myList.push_back(value);
    }
    myList.sort();
    myList.unique();
    for (int x:myList) cout<<x<<" ";
    return 0;
}