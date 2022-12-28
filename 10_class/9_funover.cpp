#include<iostream>
using namespace std;
class Bank
{
  int balance;
  public:
  Bank(int);
  void dodeposite(int);//declaration
  void dowithdraw(double);
  int showbalance();

};
  Bank::Bank(int bal)
  {
    balance = bal;
  }
  void Bank::dodeposite(int deposite)//defination
  {
    balance+=deposite;
  }

void Bank::dowithdraw(double withdraw)
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

  int  Bank::showbalance()
  {
    return balance;
  }
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
        cout<<"wthdraw amount ----";
        cin>>amount;
        person.dowithdraw(amount);
      break;

      case 3:
        cout<<"\n balance="<<person.showbalance();
      break;

      case 0:
        default:
        cout<<"envalid your choice !!!";
      break;
    }
  } while (ch!=0);

}
