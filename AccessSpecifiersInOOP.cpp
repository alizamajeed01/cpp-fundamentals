#include <iostream>
using namespace std;
class Demo
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void set()
    {
        a = 10;
        b = 20;
        c = 30;
    }

    void show()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
};

class Child : public Demo
{
public:
    void access()
    {
        // a = 10;  // private - not accessible
        b = 20;     // protected - accessible
        c = 30;     // public - accessible
    }
};

int main()
{
    Demo d;

    d.set();
    d.show();

    // d.a = 5;    // private - not accessible
    // d.b = 10;   // protected - not accessible
    d.c = 40;      // public - accessible

    cout << d.c;
}