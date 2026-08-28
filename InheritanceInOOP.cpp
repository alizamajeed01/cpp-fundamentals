#include <iostream>
using namespace std;

class Parent
{
    public:
       int car;

    protected:
       int money;

    private:
       int secret;

};
class Child : public Parent
{
    public:
       int bike;
    
    public:
       using Parent::money;

};
int main()
{
    Child ob1;

    ob1.car = 10;     // Parent's public member
    ob1.bike = 5;     // Child's own member
    ob1.money = 500;  // Inherited protected member made public

    cout << ob1.car << endl;
    cout << ob1.bike << endl;
    cout << ob1.money; 
    
    return 0;
}