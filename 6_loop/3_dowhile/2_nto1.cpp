#include<iostream>
int main()
{
  int i,n;
  std::cout<<"enter n=";
  std::cin>>n;
  i=n;
  do
    {
      std::cout<<" "<<i;
      i--;
    }while(i>=1);
  return 0;
}