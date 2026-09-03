#include <iostream>
using namespace std;

class Base final
{
    public:
        void show(){
            cout<<"Base class";
        }
};

/*class Derived:public Base
{

    // code body             // ->ERROR:Since base class is declared as final,derived class cannot inherit from base class.

};*/

int main()
{
    Base b1;

    b1.show();

    return 0;
}