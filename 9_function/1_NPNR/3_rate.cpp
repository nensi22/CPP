#include <iostream>
using namespace std;
void rate()
{
  float interest,price,rate2;
  cout<<"enter price=";
  cin>>price;
  cout<<"enter interest=";
  cin>>interest;
  rate2=(interest*100)/price;
  cout<<"\nrate2="<<rate2;
}
int main()
{
  rate();
}