#include <iostream>

int main()
{
  int i,sum=0,sum1=0;
  for(i=1;i<=10;i++)
    {
      if(i%2==0)
      {
        sum=i+sum;
      }
      else
      {
        sum1=i+sum1;
      }
    }
  std::cout<<"\n even total="<<sum;
  std::cout<<"\n odd total="<<sum1;
  std::cout<<"\n all total="<<sum+sum1;
  return 0;
}