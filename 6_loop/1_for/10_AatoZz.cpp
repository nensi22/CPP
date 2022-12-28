#include<iostream>
int main()
{
  char c,i;
  for(i='A';i<='Z';i++)
    {
      c=i+32;
      std::cout<<"  "<<i<<"="<<c;
    }
  return 0;
}