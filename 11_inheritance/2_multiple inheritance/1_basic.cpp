#include<iostream>
using namespace std;
class Base1
{
    public:
    Base1()
    {
        cout<<"\n base1 constructor called.....";
    }
    ~Base1()
    {
        cout<<"\n base1 destructor called.....";
    }
};

class Base2
{

    public:
    Base2()
    {
        cout<<"\n bas2 constructor called.....";
    }
    ~Base2()
    {
        cout<<"\n base2 destructor called.....";

    }
};

class Derived:public Base1,public Base2
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
