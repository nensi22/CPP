#include <iostream>

int main()
{
  int i=1,n;
  std::cout<<"enter n=";
  std::cin>>n;
  while(i<=n)
    {
      std::cout<<"\t"<<i;
       i*=2;
    }


  return 0;
}