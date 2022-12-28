#include<iostream>
int main()
{
  char i=65,n;
  std::cout<<"enter n=";
  std::cin>>n;
  do
    {
      std::cout<<"\t"<<i<<"="<<i+34;
      i+=4;
    }while(i<=n);
  return 0;
}