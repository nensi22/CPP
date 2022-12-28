#include <iostream>
int main()
{
  int a,b,c;
  std::cout<<"enetr a=";
  std::cin>>a;
  std::cout<<"enter b=";
  std::cin>>b;
  std::cout<<"enter c=";
  std::cin>>c;
  if(a<b && a<c)
  {
    std::cout<<"a is smallest";
  }
  else if(b<c)
  {
    std::cout<<"b is smallest";
  }
  else
  {
    std::cout<<"c is smallest";
  }
  return 0;
}