#include<iostream>
int main()
{
  int i=1,sum=0;
  do
    {
      sum=sum+i;
	    i+=2;
    }while(i<=10);
  std::cout<<"odd total="<<sum;
  return 0;
}