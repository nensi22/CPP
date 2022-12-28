#include<iostream>
int main()
{
  int i=1,n=10,j;
  do
    {
      j=1;
      do
        {
          if(i==1||i==10||j==1||j==10||i==j||j==(n+1-i))
          {
            std::cout<<" * ";
          }
          else
          {
            std::cout<<"   ";
          }
          j++;
        }while(j<=10);
      std::cout<<"\n";
      i++;
    }while(i<=10);
    return 0;
}