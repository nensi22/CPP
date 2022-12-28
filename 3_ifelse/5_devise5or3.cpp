#include <iostream>

int main()
{
  int a;
  std::cout<<"enter a=";
  std::cin>>a;
  if((a%5==0)&&(a%3==0))
  {
    std::cout<<"a is devise by 5 and 3";
  }
  else
  {
    std::cout<<"a is not devise by 5 and 3";
  }
  return 0;
}