#include <iostream>

int main()
{
  int i=1,n=10,j;
  while(i<=10)
    {
      j=1;
      while(j<=10)
        {
          if(i==1||i==10||j==1||j==10||i==j||j==(n+1-i))
          {
            std::cout<<"* ";
          }
          else
          {
            std::cout<<"  ";
          }
          j++;
        }
      std::cout<<"\n";
        i++;
    }
}