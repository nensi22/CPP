#include <iostream>

int main()
{
  int a,b,multi;
  std::cout<<"enter a=";
  std::cin>>a;
  std::cout<<"enter b=";
  std::cin>>b;
  multi=a*b;
  std::cout<<"multi="<<multi;
  if((multi%3==0)&&(multi%7==0))
  {
    std::cout<<"\nmultiplication is devise by3 and 7";
  }
  else
  {
    std::cout<<"\nmultiplication is not devise by3 and 7";
  }
  return 0;
}