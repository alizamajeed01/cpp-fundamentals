#include <iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    cout<<*(p+1)<<endl;
    cout<<*p++<<endl;
    cout<<*++p<<endl;
    cout<<*--p<<endl;

    int *start=&arr[1];
    int *end=&arr[4];
    int diff=end-start; //only subtraction is possible here even only when both above declarations are made at same time and adjacently.
    cout<<diff;  //here the operation performed is between 1 and 4(their adresses 1 and 4)so 4-1(end -start) is equal to 3.
    return 0;
}