#include<iostream>
int main()
{
  int i=1,j=1,n;
  std::cout<<"enter n=";
  std::cin>>n;
  do
    {
      std::cout<<"\t"<<i*j;
      i*=2;
      j++;
    }while(i<=n);
  return 0;
}