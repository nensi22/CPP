#include <iostream>
using namespace std;
int revnum(int num)
{
    int rev=0,rem;
    while(num!=0)
    {
      rem=num%10;
      rev=(rev*10)+rem;
      num=num/10;
    }
   return rev;
}
int main()
{
  int num;
  cout<<"enter num=";
  cin>>num;
  cout<<"\n revers a number="<<revnum(num);
}