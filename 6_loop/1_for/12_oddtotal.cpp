#include<iostream>
int main()
{
  int i,sum=0;
  for(i=1;i<=10;i+=2)
    {
      sum=i+sum;
    }
  std::cout<<"odd total= "<<sum;
  return 0;
}