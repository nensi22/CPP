#include <iostream>

int main()
{
  int i,j;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=6;j++)
        {
          if(i==1||i==5||j==1||j==6)
          {
            std::cout<<" "<<j;
          }
          else
          {
            std::cout<<"  ";
          }
        }
      std::cout<<"\n";
    }
  return 0;
}