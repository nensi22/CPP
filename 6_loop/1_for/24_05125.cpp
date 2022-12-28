#include <iostream>

int main()
{
  float i,n,a=0.5;
  std::cout<<"enter n=";
  std::cin>>n;
  for(i=0.5;i<=n;i++)
    {

        std::cout<<"\t"<<a;
        a+=i;


    }

  return 0;
}