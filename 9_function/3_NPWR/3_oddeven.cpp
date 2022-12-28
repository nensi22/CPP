#include <iostream>
using namespace std;
int oddeven()
{
  int num;
  cout<<"enter num=";
  cin>>num;
  return num%2;
}
int main()
{
  if(oddeven())
  {
    cout<<"\n number is odd";
  }
  else
  {
    cout<<"\n number is even";
  }
}