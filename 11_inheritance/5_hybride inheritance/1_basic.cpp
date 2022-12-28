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
class DerivedA:public Base
{
    public:
    DerivedA()
    {
        cout<<"\n DerivedA constructor called...";
    }
    ~DerivedA()
    {
        cout<<"\n DerivedA destructor called...";
    }
};
class DerivedB:public Base
{
    public:
    DerivedB()
    {
        cout<<"\n DerivedB constructor called...";
    }
    ~DerivedB()
    {
        cout<<"\n DerivedB destructor called...";
    }
};
class Derive:public DerivedA,public DerivedB
{
    public:
    Derive()
    {
        cout<<"\n Derive constructor called...";
    }
    ~Derive()
    {
        cout<<"\n Derive destructor called...";

    }
};

int main()
{
    Derive d;
}
