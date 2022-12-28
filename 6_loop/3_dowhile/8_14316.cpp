#include<iostream>
int main()
{
  int i=1,n,a;
  std::cout<<"enter n=";
  std::cin>>n;
  do
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
      i++;
    }while(i<=n);
  return 0;
}