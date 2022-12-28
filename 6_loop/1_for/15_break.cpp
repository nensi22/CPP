#include <iostream>

int main()
{
  int i,n;
  std::cout<<"enter n=";
  std::cin>>n;
  for(i=1;i<=n;i++)
    {
      std::cout<<"\t "<<i;
      if(i==6)
      {
        break;
      }

    }

  return 0;
}