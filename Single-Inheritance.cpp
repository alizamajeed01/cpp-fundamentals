#include <iostream>
using namespace std;

class Base
{
    public:
    int add(int a,int b)
    {
        return a + b;
    }
};

// Derived privately inherits Base
class Derived : private Base
{
   public:

   // Public function of Derived
      int f1(int a,int b)
       {
        // Calling inherited add() function
        return add(a,b);
       }

};
int main(void)
{
    // Creating object of Derived
       Derived b1;

    // Calling public f1() function
       cout<<b1.f1(2,3);

    return 0;
}