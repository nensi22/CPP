#include <iostream>

int main()
{
  char i,n,a;
  std::cout<<"enter n=";
  std::cin>>n;
  for(i='A';i<=n;i+=2)
    {
      if(i%2==0)
      {
        a=i*i;
        std::cout<<"\t"<<a;
      }
       else
      {
        std::cout<<"\t"<<i;
      }
    }

  return 0;
}