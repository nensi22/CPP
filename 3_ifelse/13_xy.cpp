#include <iostream>

int main()
{
  int x,y;
  std::cout<<"enter x=";
  std::cin>>x;
  std::cout<<"enter y=";
  std::cin>>y;
  if(x<=2000 || x>=3000)
  {
    std::cout<<"\nx is less than 2000 or greater than 3000";
  }
  if (y>100 &&y< 500)
  {
    std::cout<<"\ny is between 100 and 500";
  }
  return 0;
}