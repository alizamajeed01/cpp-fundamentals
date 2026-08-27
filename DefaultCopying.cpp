#include <iostream>
using namespace std;

class Student
{
    public:

        int roll;

        string name;

};
int main()
{
    Student s1;

    s1.roll=101;

    s1.name="Aliza";

    Student s2=s1;

    cout<<s2.roll<<endl;
    cout<<s2.name;
    
    return 0;
}