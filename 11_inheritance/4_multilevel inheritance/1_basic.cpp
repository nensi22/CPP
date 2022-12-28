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
class DerivedB:public DerivedA
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

int main()
{
    DerivedB a;
}
