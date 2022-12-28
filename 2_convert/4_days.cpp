
#include <iostream>
int main()
{
  int year,day,month,week;
  std::cout<<"enter days=";
  std::cin>>day;
  year=day/365;
  month=year*12;
  week=month*4;
  std::cout<<"\nyear="<<year;
  std::cout<<"\nmonth="<<month;
  std::cout<<"\nweek="<<week;

  return 0;
}