#include<iostream>
int main()
{
  int i=1,n;
  std::cout<<"enter n=";
  std::cin>>n;
  while(i<=n)
    {
      std::cout<<"\t"<<i;
      i++;
    }
  return 0;
}