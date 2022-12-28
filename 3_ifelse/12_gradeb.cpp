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
  if(per>=65 && per<=75)
  {
    std::cout<<"\ngrade B";
  }
  else
  {
    std::cout<<"\ngrade C";
  }
  return 0;
}