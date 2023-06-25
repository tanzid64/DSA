#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string> myList;
    //addresses input
    while (true) 
    {
        string s; cin >> s;
        if (s == "end") break;
        myList.push_back(s);
    }
    auto it = myList.begin();//Tracking Position
    int q;cin >> q;
    cin.ignore();
    for (int i = 1; i <= q; i++)
    {
        string command; getline(cin,command);
        // Starting
        if (command.substr(0, 5) == "visit")
        {
            string target = command.substr(6);
            auto found = find(myList.begin(), myList.end(), target);
            if (found != myList.end()) 
            {
                it = found; // Update position
                cout << *it << endl;
            } 
            else cout << "Not Available" << endl;
        } 
        // Going Previous
        else if (i!= 1 && command == "prev") 
        {
            if (it != myList.begin()) 
            {
                it--; // Moving previous
                cout << *it << endl;
            } 
            else cout << "Not Available" << endl;
        }
        // Going Next
        else if (i!= 1 && command == "next") 
        {
            if(next(it) != myList.end())
            {
                it++;
                cout<<*it<<endl;
            }
            else cout << "Not Available" << endl;
        }
    }
    
    return 0;
}