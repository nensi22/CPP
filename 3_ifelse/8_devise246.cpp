#include <iostream>

int main()
{
  int a;
  std::cout<<"enter a=";
  std::cin>>a;
  if((a%2==0)&&(a%4==0)&&(a%6==0))
  {
    std::cout<<"a is devise by 2 ,4 and 6";
  }
  else
  {
    std::cout<<"a is not devise by 2 ,4 and 6";
  }
  return 0;
}