#include <iostream>
using namespace std;
void rate(float price,float interest)
{
  cout<<"\n rate2="<<(interest*100)/price;
}
int main()
{
  float price,interest;
  cout<<"enter price=";
  cin>>price;
  cout<<"enter interest=";
  cin>>interest;
  rate(price,interest);
}