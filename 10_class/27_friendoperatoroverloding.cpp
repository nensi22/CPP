#include<iostream>
using namespace std;
class Loc
{
    int longitude,latitude;
    public:
    Loc()
    {
        longitude=0;
        latitude=0;
    }
    Loc(int lg,int lt)
    {
        longitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<<"\n longitude  "<<longitude<<" ";
        cout<<"\n latitude  "<<latitude<<"\n";
    }
    friend Loc operator+(Loc,Loc);
};
Loc operator+(Loc op1,Loc op2)
{
    Loc temp;
    temp.longitude=op1.longitude+op2.longitude;
    temp.latitude=op1.latitude+op2.latitude;

    return temp;
}
int main()
{
    Loc ob1(10,20),ob2(5,30),ob3;
    ob1.show();
    ob2.show();
    ob3=ob1+ob2;
    ob3.show();

    return 0;
}