#include <iostream>
using namespace std;
int rate()
{
  float price,interest;
  cout<<"enter price=";
  cin>>price;
  cout<<"enter interest=";
  cin>>interest;
  return (interest*100)/price;
}
int main()
{
  int rate2;
  rate2=rate();
  cout<<"\n rate="<<rate2;
}