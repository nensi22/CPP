//year
#include <iostream>
int main()
{
  float year,day,month,week;
  std::cout<<"enter month=";
  std::cin>>month;
  year=month/12;
  week=month*4;
  day=week*7;
  std::cout<<"\nyear="<<year;
  std::cout<<"\nweek="<<week;
  std::cout<<"\nday="<<day;
  return 0;
}