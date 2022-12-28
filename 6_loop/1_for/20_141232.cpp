#include <iostream>

int main()
{
  int i,n,j=1;
  std::cout<<"enter n=";
  std::cin>>n;
  for(i=1;i<=n;i*=2,j++)
    {
        std::cout<<"\t"<<i*j;
    }

  return 0;
}