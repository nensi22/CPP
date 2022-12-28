#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"\n base constructor called.....";
    }
    ~Base()
    {
        cout<<"\n base destructor called.....";
    }
};
class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"\n Derived constructor called...";
    }
    ~Derived()
    {
        cout<<"\n Derived destructor called...";
    }
};
int main()
{
    Derived d;
}
