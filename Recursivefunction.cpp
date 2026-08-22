#include <iostream>
using namespace std;

void f(int x)
{
    if (x > 0)
    {
        cout << x << endl;
        f(x - 2);
        cout << x << endl;
    }
}

int main()
{
    f(5);

    return 0;
}