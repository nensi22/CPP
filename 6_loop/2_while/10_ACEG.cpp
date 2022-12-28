#include <iostream>

int main()
{
  char i='A',n;
  std::cout<<"enter n=";
  std::cin>>n;
  while(i<=n)
    {
      std::cout<<"\t"<<i;
       i+=2;
    }


  return 0;
}