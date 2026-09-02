#include <iostream>
using namespace std;
class A
{
   public:
      void show(){
        cout<<"BASE";
      }
};
class B:public A
{
   public:
       void show(){
        cout<<"DERIVED";
       }
};
int main()
{
    B b1;
    b1.show();    // show() in derived class overrides/hides show() from the base class.

    // B b2;           // To show output "BASE"
    // b2.A::show();          

    return 0;
}