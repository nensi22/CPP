#include <iostream>

int main()
{
  int rate,qty,discount,amt,gst,netbill,billamt;
  std::cout<<"enter rate=";
  std::cin>>rate;
  std::cout<<"enter qty=";
  std::cin>>qty;
  amt=rate*qty;
  std::cout<<"\n amount="<<amt;
  if(amt<=10000)
  {
    discount=amt*0.05;
    billamt=amt-discount;
    gst=billamt*0.18;
    netbill=billamt+gst;
    std::cout<<"\n discount="<<discount;
    std::cout<<"\n billamount="<<billamt;
    std::cout<<"\n gst="<<gst;
    std::cout<<"\n netbill="<<netbill;
  }
  else if(amt>10000)
  {
    discount=amt*0.10;
    billamt=amt-discount;
    gst=billamt*0.28;
    netbill=billamt+gst;
    std::cout<<"\n discount="<<discount;
    std::cout<<"\n billamount="<<billamt;
    std::cout<<"\n gst="<<gst;
    std::cout<<"\n netbill="<<netbill;
  }
  std::cout<<"\n Rate\tQty\t\tamt\t\tdis\t\tBill\tGst\t\tNet\n";
  std::cout<<rate<<"\t\t"<<qty<<"\t\t"<<amt<<"\t"<<discount<<"\t"<<billamt<<"\t"<<gst<<"\t"<<netbill;
  return 0;
}