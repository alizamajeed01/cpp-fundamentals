#include <iostream>
using namespace std;
class Box
{
    int length=10;
    friend void show(Box);
};
void show(Box a)
{
    cout<<a.length;
}
int main ()
{
    Box b;

    show(b);

    return 0;
}