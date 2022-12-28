#include<iostream>
int main()
{
    char i=1,n,j='A';
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
        j++;
    }while(i<=5);
    return 0;
}