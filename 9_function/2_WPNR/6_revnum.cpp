#include <iostream>
using namespace std;
void revnum(int num)
{
  int rev=0,rem;
  while(num!=0)
    {
      rem=num%10;
      rev=(rev*10)+rem;
      num=num/10;
    }
  cout<<"\n revers number is "<<rev;
}
int main()
{
  int num;
  cout<<"enter num=";
  cin>>num;
  revnum(num);
}