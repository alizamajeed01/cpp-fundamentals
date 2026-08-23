#include <iostream>
using namespace std;
void fun1()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int *ptr=new int[n];

    delete[] ptr;
    
}
int main()
{
    fun1();
    return 0;
}