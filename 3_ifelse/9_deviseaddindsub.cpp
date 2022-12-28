#include <iostream>

int main()
{
  int a,b,addi,multi,sub;
  std::cout<<"enter a=";
  std::cin>>a;
  std::cout<<"enter b=";
  std::cin>>b;
  addi=a+b;
  sub=a-b;
  multi=a*b;
  std::cout<<"\naddi="<<addi;
  std::cout<<"\nsub="<<sub;
  std::cout<<"\nmulti="<<multi;
  if((multi%addi==0)&&(multi%sub==0))
  {
    std::cout<<"\nmultiplication is devise by addition and subtration";
  }
  else
  {
    std::cout<<"\nmultiplication is not  devise by addition and subtration";
  }
  return 0;
}