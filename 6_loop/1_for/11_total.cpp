#include<iostream>
int main()
{
  int i,sum=0;
  for(i=1;i<=10;i++)
    {
      sum=i+sum;
      i++;
    }
  std::cout<<" total= "<<sum;
  return 0;
}