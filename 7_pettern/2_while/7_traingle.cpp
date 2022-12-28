#include<iostream>
int main()
{
  int i=1,j,k,sp=10;
  while(i<=10)
    {
      k=1;
      while(k<=sp)
        {
          std::cout<<" ";
          k++;
        }
      j=1;
      while(j<=i)
        {
          std::cout<<"* ";
          j++;
        }
      std::cout<<"\n";
      sp--;
      i++;

    }
  return 0;
}