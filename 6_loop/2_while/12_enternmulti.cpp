#include <iostream>

int main()
{
  int i=1,n,c;
  std::cout<<"enter n=";
  std::cin>>n;
  while(i<=10)
    {
      c=n*i;
      std::cout<<"\n"<<n<<"*"<<i<<"="<<c;
      i++;
    }


  return 0;
}