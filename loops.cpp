#include <iostream>
using namespace std;
int main()
{
    //for loop
    for(int i=1; i<=4; i++)
    {
        cout<<i<<endl;
    }

    //while loop
    int i=1;
    while(i<=4)
    {
        cout<<"Pakistan"<<endl;
        i++;
    }
    
    int pin;
    while(pin != 9999)
    {
        cin>>pin;
        cout<<"Incorrect PIN.Try Again!";
    }

    // do while loop
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=5);

    int password;
    int correctPassword=2345;
    do{
        cout<<"Enter password: ";
        cin>>password;
    }while(password != correctPassword);

    return 0;
}