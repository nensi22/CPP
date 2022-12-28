//year
#include <iostream>
int main()
{
  float year,day,month,week;
  std::cout<<"enter year=";
  std::cin>>year;
  month=year*12;
  week=year*48;
  day=year*365;
  std::cout<<"\nmonth="<<month;
  std::cout<<"\nweek="<<week;
  std::cout<<"\nday="<<day;

  return 0;
}