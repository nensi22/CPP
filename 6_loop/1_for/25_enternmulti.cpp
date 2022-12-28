#include<iostream>
int main()
{
  int i=1,n,c;
  std::cout<<"enter n=";
  std::cin>>n;
  for(i=1;i<=10;i++)
    {
      c=i*n;
      std::cout<<"\n"<<n<<"*"<<i<<"="<<c;
    }
  return 0;
}