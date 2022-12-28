#include <iostream>
using namespace std;
void oddeven(int num)
{
  if(num%2==0)
  {
    cout<<"\n number is even";
  }
  else
  {
    cout<<"\n number is odd";
  }
}
int main()
{
  int num;
  cout<<"enter num=";
  cin>>num;
  oddeven(num);
}