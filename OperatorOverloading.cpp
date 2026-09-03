#include <iostream>
using namespace std;

class Channel
{
    int subscribers;

    public:
      Channel(int s){
        subscribers=s;
      }

    void operator++(){
        subscribers++;
    }

    void display(){
        cout<<subscribers;
    }
};
int main()
{
    Channel rt(1000);
    ++rt;
    rt.display();

    return 0;
}