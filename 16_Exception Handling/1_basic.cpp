#include<iostream>
using namespace std;
double zerodivision(int x,int y)
{
    if (y==0)
    {
        throw"Division by zero";
    }
    return (x/y);
}
int main()
{
    cout<<"\n begin main";
    int a=11;
    int b=0;
    double c=0;

    try
    {
        c=zerodivision(a,b);
        cout<<c<<endl;
    }
    catch(const char* massage)
    {
        cerr<<"\n\t"<<massage<<endl;
    }
    cout<<"\n end main";
    return 0;
}