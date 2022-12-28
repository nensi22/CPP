#include <iostream>

int main()
{
  char ch,asci;
  std::cout<<"enter character=";
  std::cin>>ch;
  if(ch>='A' && ch<='Z')
  {
    asci=ch+32;
    std::cout<<"\n small="<<asci;
  }
  if(ch>='a' && ch<='z')
  {
    asci=ch-32;
    std::cout<<"\n capital="<<asci;
  }
  return 0;
}