#include <iostream>

int main()
{
  int i=2,sum=0;
  for(i=2;i<=10;i+=2)
    {
      sum=i+sum;
    }
  std::cout<<"even total="<<sum;
  return 0;
}