#include <iostream>
using namespace std;
int  oddeven(int num)
{
  return num%2;
}
int main()
{
 int num;
  cout<<"enter num=";
  cin>>num;

  if(oddeven(num))
  {
    cout<<"\n number is odd";
  }
  else
  {
    cout<<"\n number is even";
  }
}