#include <iostream>
using namespace std;
void fun2()
{
    int n;
    cin>>n;
    int *ptr=new int[n];
    for(int i=0; i<n; i++)
    {
        ptr[i]=i+1;
    }
    delete[] ptr;
}
int main()
{
    fun2();
    return 0;
}