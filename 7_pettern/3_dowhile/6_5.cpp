#include<iostream>
int main()
{
  int i,j;
  i=1;
  do
    {

      j=1;
      do
        {
          std::cout<<"* ";
          j++;
        }while(j<=5);
        std::cout<<"\n";

        i++;
    }while(i<=5);

    return 0;
}