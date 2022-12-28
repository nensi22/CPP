#include <iostream>

int main()
{
  int salary,s;
  float HRA,DA,basic,aa,bb,cc,dd,ee,ff;
  std::cout<<"enter salary=";
  std::cin>>salary;
  aa=5000*0.08;
  bb=5000*0.20;
  cc=5000*0.12;
  dd=5000*0.30;
  ee=5000*0.15;
  ff=5000*0.40;
  if(salary<5000)
  {
    HRA=salary*0.08;
    DA=salary*0.20;
    basic=salary+HRA+DA;
    std::cout<<"\nHRA="<<HRA;
    std::cout<<"\nDA="<<DA;
    std::cout<<"\nbasic="<<basic;
  }
  else if ( salary<=10000)
  {
    s=salary-5000;
    HRA=(s*0.12)+aa;
    DA=(s*0.30)+bb;
    basic=salary+HRA+DA;
    std::cout<<"\nHRA="<<HRA;
    std::cout<<"\nDA="<<DA;
    std::cout<<"\nbasic="<<basic;
  }
  else if ( salary<=15000)
  {
    s=salary-10000;
    HRA=(s*0.15)+aa+cc;
    DA=(s*0.40)+bb+dd;
    basic=salary+HRA+DA;
    std::cout<<"\nHRA="<<HRA;
    std::cout<<"\nDA="<<DA;
    std::cout<<"\nbasic="<<basic;
  }
  else if (salary>15000)
  {
    s=salary-15000;
    HRA=(s*0.20)+aa+cc+ee;
    DA=(s*0.50)+bb+dd+ff;
    basic=salary+HRA+DA;
     std::cout<<"\nHRA="<<HRA;
    std::cout<<"\nDA="<<DA;
    std::cout<<"\nbasic="<<basic;
  }
  return 0;
}