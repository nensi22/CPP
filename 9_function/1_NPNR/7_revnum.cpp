#include <iostream>
using namespace std;
void revnum()
{
  int num,rev=0,rem;
  cout<<"enter number=";
  cin>>num;
  while(num!=0)
  {
    rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
  }
  cout<<"revers number is="<<rev;
}
int main()
{
  revnum();
}