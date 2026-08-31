#include <iostream>
using namespace std;

class Print
{
    public:

    void display(int x)
    {
        cout<<x<<endl;
    }

    void display(int s,int y)
    {
        cout<<s<<","<<y<<endl;
    }
    
};
int main()
{
    Print obj;
    obj.display(12);
    obj.display(13,15);
    
    return 0;
}