#include <iostream>

int main()
{
  int i,n,a=0,b=1,c;
  std::cout<<"enter n=";
  std::cin>>n;
  std::cout<<" "<<b;
  for(i=2;i<=n;i++)
    {
      if(i%2==0)
      {
        c=a+b;
        std::cout<<"\t"<<c;
        a=b;
        b=c;
      }

    }

  return 0;
}