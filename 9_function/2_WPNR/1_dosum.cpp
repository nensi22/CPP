#include <iostream>
using namespace std;
void dosum(int a,int b)
{
  cout<<"\n a+b="<<a+b;
}
int main()
{
  int a,b;
  cout<<"enter a=";
  cin>>a;
  cout<<"enter b=";
  cin>>b;
  dosum(a,b);
}