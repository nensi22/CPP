#include<iostream>
int main()
{
  int i,n;
  std::cout<<"enter n=";
  std::cin>>n;
  i=n;
  for(i=n;i>=1;i--)
    {
      std::cout<<"\t"<<i;
    }
  return 0;
}