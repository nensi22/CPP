#include <iostream>

int main()
{
  int i=1,n,a;
  std::cout<<"enter n=";
  std::cin>>n;
  while(i<=n)
    {
      a=i*i;
      i++;
      std::cout<<"\t"<<a;
    }


  return 0;
}