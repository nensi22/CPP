#include<iostream>
int main()
{
  int i=1,n,j=1;
  do
    {
      n=1;
      do
        {
          std::cout<<"\t"<<j;

          n++;
        }while(n<=5);
        std::cout<<"\n";
        i++;
        j+=2;
    }while(i<=5);
    return 0;
}