#include <iostream>
using namespace std;
int dosum(int a,int b)
{
  return a+b;
}
int main()
{
  int a,b;
  cout<<"enter a=";
  cin>>a;
  cout<<"enter b=";
  cin>>b;
  cout<<"\n a+b="<<dosum(a,b);
}