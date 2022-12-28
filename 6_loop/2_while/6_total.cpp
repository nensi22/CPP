#include <iostream>

int main()
{
  int i=1,sum=0;
  while(i<=10)
    {
      sum=i+sum;

      i++;
    }
  std::cout<<"total="<<sum;

  return 0;
}