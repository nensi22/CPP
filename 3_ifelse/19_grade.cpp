#include <iostream>

int main()
{
  int m1,m2,m3,m4,total;
  float per;
  std::cout<<"enter maths=";
  std::cin>>m1;
  std::cout<<"enter sci=";
  std::cin>>m2;
  std::cout<<"enter eng=";
  std::cin>>m3;
  std::cout<<"enter guj=";
  std::cin>>m4;
  total=m1+m2+m3+m4;
  per=total/4;
  std::cout<<"\ntotal="<<total;
  std::cout<<"\n per="<<per;
  if(m1>35 && m2>35 && m3>35 && m4>35)
  {
    if(per>75)
    {
      std::cout<<"\n grade A";
    }
    if(per<=75)
    {
      std::cout<<"\n grade B";
    }
    if(per<=65)
    {
      std::cout<<"\n grade C";
    }
    if(per<=45)
    {
      std::cout<<"\n grade D";
    }
    if(per<=35)
    {
      std::cout<<"\n fail";
    }
  }
  else
  {
    std::cout<<"\n fail";
  }
  return 0;
}
