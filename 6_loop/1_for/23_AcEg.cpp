#include <iostream>

int main()
{
  char i,n,c;
  std::cout<<"enter n=";
  std::cin>>n;
  for(i=65;i<=n;i+=4)
    {
        c=i+34;
        std::cout<<" "<<i<<" "<<c;


    }

  return 0;
}