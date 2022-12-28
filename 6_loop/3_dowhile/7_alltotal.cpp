#include<iostream>
int main()
{
  int i=1,sum=0,sum1=0;
  do
    {
      if(i%2==0)
	        {
	           sum=sum+i;
	           i++;
	        }
	        else
	        {
	           sum1=sum1+i;
	           i++;
	        }
    }while(i<=10);
  std::cout<<"\n even total="<<sum;
  std::cout<<"\n odd total="<<sum1;
  std::cout<<"\n all total="<<sum+sum1;
  return 0;
}