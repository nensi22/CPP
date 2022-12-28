#include <iostream>

int main()
{
  int i=2,sum=0;
  while(i<=10)
    {
      sum=i+sum;

      i+=2;
    }
  std::cout<<"total="<<sum;

  return 0;
}