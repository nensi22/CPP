#include <iostream>

int main()
{
  int i,n,a;
  std::cout<<"enter n=";
  std::cin>>n;
  for(i=1;i<=n;i++)
    {
      if(i%2==0)
      {
        a=i*i;
        std::cout<<"\t"<<a;
      }
      else
      {
        std::cout<<"\t"<<i;
      }
    }

  return 0;
}