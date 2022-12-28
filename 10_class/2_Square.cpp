#include<iostream>
using namespace std;
class Square
{
    int n;
    public:
    void set_n(int val)
    {
        n=val;
    }
    int get_n()
    {
        return n;
    }
    int dosquare()
    {
        return n*n;
    }
};
int main()
{
    Square sq;
    sq.set_n(4);
    cout<<"square of"<<sq.get_n()<<"is "<<sq.dosquare();
}