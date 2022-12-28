#include<iostream>
using namespace std;
class Complex
{
    float a,b;
    public:
    void set(float,float);
    Complex sum(Complex);
    void display();
};
void Complex::set(float real,float imgn)
{
    a=real;
    b=imgn;
}
Complex Complex::sum(Complex c)
{
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
void Complex::display()
{
    cout<<" \n real "<<a<<" ";
    cout<<" imagin  "<<b;
}
int main()
{
    Complex c1,c2,c3;
    c1.set(2.2,2.2);
    c2.set(3.3,3.3);
    c3=c1.sum(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}