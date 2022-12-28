//run time polumorphisam //function overriding
#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void display()
        {
            cout<<" Base class is invoked "<<endl;
        }   
};
class Dervied : public Base
{
    public:
     void display()
     {
        cout<<" Dervied class is invoked "<<endl;
     }
};
int main()
{
    Base *p,b;
    Dervied d;
    p=&b;
    p -> display();
    p=&d;
    p -> display();
}