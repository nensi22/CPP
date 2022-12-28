#include<iostream>
using namespace std;
class Functionover
{
    public:
    Functionover();
    void sum(int,int);
    void sum(int ,int,int);
    void sum(double,double);
};
Functionover::Functionover()
{
    cout<<"\n default constructor";
}
void Functionover::sum(int a,int b)
{
    cout<<"\n sum of two int values== "<<a+b;
}
void Functionover::sum(int a,int b,int c)
{
    cout<<"\n sum of three int values== "<<a+b+c;
}
void Functionover::sum(double a,double b)
{
    cout<<"\n sum of two double values== "<<a+b;
}
int main()
{
    Functionover object;
    object.sum(2,3);
    object.sum(3,3,3);
    object.sum(3.3,3.3);
}