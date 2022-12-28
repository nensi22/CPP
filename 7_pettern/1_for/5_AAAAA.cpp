#include <iostream>

int main()
{
   int i,n;
   char j=65;
   for(i=1;i<=5;i++)
     {
       for(n=1;n<=5;n++)
         {
           std::cout<<"\t"<<j;
         }
       std::cout<<"\n";
       j++;
     }
  return 0;
}