#include<iostream>
using namespace std;
class Bank
{
  int bal;
  public:
  Bank(int);
  Bank(Bank &new_balance);
  void dodeposite(int);//declaration
  void dowithdraw(double);
  int showbalance();

};
  Bank::Bank(int bal)
  {
    this->bal = bal;
  }
  Bank::Bank(Bank &new_balance)
  {
    bal=new_balance.bal;
    cout<<"\n bal="<<bal;
  }
  void Bank::dodeposite(int deposite)//defination
  {
    bal+=deposite;
  }

void Bank::dowithdraw(double withdraw)
  {

    if(bal>withdraw)
    {
      bal-=withdraw;
    }
    else
    {
      cout<<"\n you have not withdraw your amount ";
    }
  }

  int  Bank::showbalance()
  {
    return bal;
  }
int main()
{
  Bank person1(1000);
  Bank person2(person1);
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
        person2.dodeposite(amt);
      break;
      case 2:
        cout<<"wthdraw amount ----";
        cin>>amount;
        person2.dowithdraw(amount);
      break;

      case 3:
        cout<<"\n balance="<<person2.showbalance();
      break;

      case 0:
        default:
        cout<<"envalid your choice !!!";
      break;
    }
  } while (ch!=0);

}
