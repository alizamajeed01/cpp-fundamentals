#include <iostream>
using namespace std;
void Array(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int array[5];
    int size=5;
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    Array(array,size);
    return 0;
}