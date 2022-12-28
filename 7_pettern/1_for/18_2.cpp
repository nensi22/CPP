#include <iostream>

int main()
{
   int i,j;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=5;j++)
        {
          if(i>=j)
          {
            std::cout<<" "<<i;
          }
          else
          {
            std::cout<<" *";
          }
        }
      std::cout<<"\n";
    }
  return 0;
}