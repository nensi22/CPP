#include <iostream>

int main()
{
  int a,b,c;
  std::cout<<"enter a=";
  std::cin>>a;
  std::cout<<"enter b=";
  std::cin>>b;
  std::cout<<"enter c=";
  std::cin>>c;
  if(a<b&&a<c)
  {
    std::cout<<"a is minimize";
  }
  else if(b<c)
  {
    std::cout<<"b is minimize";
  }
  else
  {
     std::cout<<"c is minimize";
  }
  return 0;
}