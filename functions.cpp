#include <iostream>
using namespace std;
void fun2(int result)
{
    cout<<result;
}
void fun1(int a,int b)
{
    int sum=a+b;
    fun2(sum);
}
int main()
{
    int num1=10,num2=20;
    fun1(num1,num2);
    return 0;
}