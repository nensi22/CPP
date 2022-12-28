#include<iostream>
int main()
{
  int i=1,n;
  std::cout<<"enter n=";
  std::cin>>n;
  do
    {
      std::cout<<"\t"<<i;
      if(i==5)
      {
        break;
      }
      i++;
    }while(i<=n);
  return 0;
}