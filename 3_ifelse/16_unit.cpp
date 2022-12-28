#include <iostream>

int main()
{
  int unit;
  float amt,surcharge;
  std::cout<<"enter unit=";
  std::cin>>unit;
  if(unit<=100)
  {
    amt=(unit*0.60)+50;
    std::cout<<"\namount="<<amt;
  }
  else if (unit<=300)
  {
    amt=60+(unit-100)*0.80+50;
    std::cout<<"\namount="<<amt;
  }
  else if (unit>300)
  {
    amt=220+(unit-300)*0.90+50;
    std::cout<<"\namount="<<amt;
  }
  if(amt>300)
  {
    surcharge=(amt-300)*0.15;
    std::cout<<"\n surcharge="<<surcharge;
  }
  else
  {
    std::cout<<"\nnot pay surcharge";
  }
  return 0;
}