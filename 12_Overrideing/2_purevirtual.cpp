#include<iostream>
using namespace std;
class Base //abstract class // interface
{
    public:
    virtual void display()=0;  //pure virtual

};
class Dervied : public Base 
{
    public:
     void display()
     {
        cout<<" Dervied claas is invoked "<<endl;
     }
};
int main()
{
    Dervied d;
    d.display();
}
