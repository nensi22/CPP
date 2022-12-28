#include <iostream>

int main()
{
  int marks;
  std::cout<<"enter marks=";
  std::cin>>marks;

    if(marks>=75)
    {
      std::cout<<"\n grade A";
    }
    else if(marks>=65)
    {
      std::cout<<"\n grade B";
    }
    else if(marks>=55)
    {
      std::cout<<"\n grade C";
    }
    else if(marks>=45)
    {
      std::cout<<"\n grade D";
    }
    else
    {
      std::cout<<"\n fail";
    }
  return 0;
}
