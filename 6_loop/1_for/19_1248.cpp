#include <iostream>

int main()
{
  int i,n;
  std::cout<<"enter n=";
  std::cin>>n;
  for(i=1;i<=n;i*=2)
    {
        std::cout<<"\t"<<i;
    }

  return 0;
}