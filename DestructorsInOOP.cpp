#include <iostream>
using namespace std;

class Demo
{
    public:

    Demo(){
        cout << "Constructor called" << endl;
        }

    ~Demo(){
        cout << "Destructor called" << endl;
        }

};

int main()
{
    Demo d1;
    Demo d2;   // Constructor being called second time

    return 0;
} 