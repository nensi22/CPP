#include<iostream>
int main()
{
  int i,n,j,sp=10;
  i=1;
  do
    {
      n=1;
      do
        {
          std::cout<<" ";
          n++;
        }while(n<=sp);
      j=1;
      do
        {
          std::cout<<"* ";
          j++;
        }while(j<=i);
        std::cout<<"\n";
        sp--;
        i++;
    }while(i<=10);
  i=1;
  sp=2;
  do
    {
      n=1;
      do
        {
         std::cout<<" ";
          n++;
        }while(n<=sp);
      j=9;
      do
        {
          std::cout<<"* ";
          j--;
        }while(j>=i);
      std::cout<<"\n";
      sp++;
      i++;
    }while(i<=9);
    return 0;
}