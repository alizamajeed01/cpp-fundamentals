#include <iostream>
using namespace std;

class Print
{
    public:

    void display(int x){
        cout<<x<<endl;
    }

    void display(double y){
        cout<<y<<endl;
    }
};
int main()
{
    Print obj;
    obj.display(10);
    obj.display(12.5);
}