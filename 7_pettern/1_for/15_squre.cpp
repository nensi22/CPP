#include <iostream>

int main()
{
   int i,n=10,j;
  for(i=1;i<=10;i++)
    {
      for(j=1;j<=10;j++)
        {
          if(i==1||i==10||j==1||j==10||i==j||j==(n+1-i))
          {
            std::cout<<"* ";
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