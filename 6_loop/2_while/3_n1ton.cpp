#include <iostream>

int main()
{
  int n1,n,i;
  std::cout<<"enter -n=";
  std::cin>>n1;
  std::cout<<"enter n=";
  std::cin>>n;
  i=n1;
  while(i<=n)
    {
      std::cout<<"\t"<<i;
      i++;
    }
  return 0;
}