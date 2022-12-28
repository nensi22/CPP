#include <iostream>

int main()
{
  int i,n,a;
  std::cout<<"enter n=";
  std::cin>>n;
  for(i=1;i<=n;i++)
    {
      a=i*i;
      std::cout<<"\t"<<a;
    }

  return 0;
}