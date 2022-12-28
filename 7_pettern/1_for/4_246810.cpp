#include <iostream>

int main()
{
   int i,n,j=2;
   for(i=1;i<=5;i++)
     {
       for(n=1;n<=5;n++)
         {
           std::cout<<"\t"<<j;
         }
       std::cout<<"\n";
       j+=2;
     }
  return 0;
}