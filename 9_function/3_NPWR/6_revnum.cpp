#include <iostream>
using namespace std;
int revnum()
{
  int num,rev=0,rem;
  cout<<"enter num=";
  cin>>num;
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
  int rv;
  rv=revnum();
  cout<<"\n squer="<<rv;
}