#include<iostream>
using namespace std;
class Bank
{
  int balance;
  public:
  Bank(int bal)
  {
    balance = bal;
  }
  void dodeposite(int deposite)
  {
    balance+=deposite;
  }

  void dowithdraw(int withdraw)
  {

    if(balance>withdraw)
    {
      balance-=withdraw;
    }
    else
    {
      cout<<"\n you have not withdraw your amount ";
    }
  }

  int  showbalance()
  {
    return balance;
  }
};
int main()
{
  Bank person(1000);
  int ch,amt,amount,balance;
  do
  {
    cout<<"\n enter your choice----";
    cout<<"\n case 1 deposite";
    cout<<"\n case 2 withdraw";
    cout<<"\n case 3 showbalance";
    cout<<"\n case 0 exit";
    cout<<"\n\n";
    cout<<"enter your choice===";
    cin>>ch;
    switch(ch)
    {

      case 1:
        cout<<"deposite amount  -----   ";
        cin>>amt;
        person.dodeposite(amt);
      break;

      case 2:
        cout<<"withdraw amount ----";
        cin>>amount;
        person.dowithdraw(amount);
      break;

      case 3:
        cout<<"\n balance="<<person.showbalance();
      break;

      case 0:
        default:
        cout<<"\n envalid your choice !!!";
      break;
    }
  } while (ch!=0);

}
