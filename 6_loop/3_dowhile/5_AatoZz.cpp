#include<iostream>
int main()
{
  char i='A',c;
  do
    {
      c=i+32;
      std::cout<<" "<<i<<"="<<c;
      i++;
    }while(i<='Z');
  return 0;
}