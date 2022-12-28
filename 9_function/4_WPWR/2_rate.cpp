#include <iostream>
using namespace std;
float rate(float price,float interest)
{
  return (interest*100)/price;
}
int main()
{
  float price,interest;
  cout<<"enter price=";
  cin>>price;
  cout<<"enter interest=";
  cin>>interest;
  cout<<"\n a+b="<<rate(price,interest);
}