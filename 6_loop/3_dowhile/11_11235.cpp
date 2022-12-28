#include<iostream>
int main()
{
  int i=1,n,a=0,b=1,c;
  std::cout<<"enter n=";
  std::cin>>n;
  std::cout<<"\n"<<b;
  do
    {
      c=a+b;
      std::cout<<"\t"<<c;
      a=b;
	    b=c;
	    i++;
    }while(i<=n);
  return 0;
}