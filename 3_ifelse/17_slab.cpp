#include <iostream>

int main()
{
  int income,inc;
  float taxe,tax1,tax2,tax3,total;
  std::cout<<"enter income=";
  std::cin>>income;
  tax1=2500*0.10;
  tax2=5000*0.20;
  if(income<2500)
  {
    std::cout<<"tax not pay";
  }
  else if(income<=5000)
  {
    inc=income-2500;
    taxe=inc*0.10;
    std::cout<<"\n taxe="<<taxe;
  }
  else if(income<=10000)
  {
    inc=income-5000;
    taxe=inc*0.20;
    total=income-tax1-tax2;
    std::cout<<"\n taxe="<<taxe;
    std::cout<<"\n total="<<total;
  }
  else if (income>10000)
  {
    inc=income-10000;
    taxe=inc*0.30;
    total=income-tax1-tax2;
    std::cout<<"\n taxe="<<taxe;
    std::cout<<"\n total="<<total;
  }
  return 0;
}