#include <iostream>

int main()
{
  float i=0.5,n,a=0.5;
  std::cout<<"enter n=";
  std::cin>>n;
  while(i<=n)
    {
      std::cout<<"\t "<<a;
      a+=i;
     i++;
    }


  return 0;
}