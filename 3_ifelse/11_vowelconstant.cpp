#include <iostream>

int main()
{
  char ch;
  std::cout<<"enter a=";
  std::cin>>ch;
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  {
    std::cout<<"character is vowel";
  }
  else
  {
    std::cout<<"character is constant";
  }
  return 0;
}