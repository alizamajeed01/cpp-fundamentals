#include <iostream>
using namespace std;

class Base
{
    public:
     virtual void display() final
        {
            cout<<"BASE CLASS";
        }
};

class Derived:public Base          
{
   /* public:
     void display()                   // ERROR: Cannot override a final function
     {
        cout<<"DERIVED CLASS";
     } */
};

int main()                         
{
    Base f1;
    Derived d1;

    d1.display();                    // Calls inherited Base::display()

    return 0;
}