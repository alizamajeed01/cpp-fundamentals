#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v={10,20,30};
    cout<<v.size()<<endl;      // Size = 3
    cout<<v.capacity()<<endl;  // Capacity = 3 
    v.push_back(40);           // Add new element
    cout<<v.size()<<endl;      // Size increases by one and becomes 4
    cout<<v.capacity();        // Capacity becomes double and now it is 6
    return 0;
}