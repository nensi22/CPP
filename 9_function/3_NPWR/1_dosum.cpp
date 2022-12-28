#include <iostream>
using namespace std;
int dosum()
{
  int a,b;
  cout<<"enter a=";
  cin>>a;
  cout<<"enter b=";
  cin>>b;
  return a+b;
}
int main()
{
  int sum;
  sum=dosum();
  cout<<"\n a+b="<<sum;
}