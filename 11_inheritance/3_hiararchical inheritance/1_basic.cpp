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
class Derived1:public Base
{
    public:
    Derived1()
    {
        cout<<"\n Derived1 constructor called...";
    }
    ~Derived1()
    {
        cout<<"\n Derived1 destructor called...";
    }
};
class Derived2:public Base
{
    public:
    Derived2()
    {
        cout<<"\n Derived2 constructor called...";
    }
    ~Derived2()
    {
        cout<<"\n Derived2 destructor called...";
    }
};
class Derived3:public Base
{
    public:
    Derived3()
    {
        cout<<"\n Derived3 constructor called...";
    }
    ~Derived3()
    {
        cout<<"\n Derived3 destructor called...";
    }
};
int main()
{
    Derived1 a;
    Derived2 b;
    Derived3 c;
}
