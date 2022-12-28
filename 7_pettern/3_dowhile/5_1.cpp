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
        }while(j<=i);
        std::cout<<"\n";

        i++;
    }while(i<=10);

    return 0;
}