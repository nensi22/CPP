#include <iostream>

int main()
{
  int a;
  std::cout<<"person's age=";
  std::cin>>a;
  if(a<18)
  {
    std::cout<<"person is not eligible for voting";
  }
  else
  {
    std::cout<<"person is eligible for voting";
  }
  return 0;
}