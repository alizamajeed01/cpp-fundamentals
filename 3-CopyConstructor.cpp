#include <iostream>
using namespace std;

class Student
{
    private:
        int roll;
        string name;

    public:
       Student(int r,string n)
    {
        roll=r;
        name=n;
    }

Student(const Student &s)
{
    roll=s.roll;
    name=s.name;
}
};

int main()
{
    Student s1(101,"Aliza");
    Student s2=s1;

    return 0;       // This code returns nothing but only creates a copy. 
}   