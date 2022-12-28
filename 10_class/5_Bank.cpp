#include<iostream>
using namespace std;
class Bank
{
  int balance;
  public:
  void yourbalance()
  {
    cout<<"enter your balance==";
    cin>>balance;
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
  Bank person;
  int ch,amt,amount;
  
  do
  {
    cout<<"\n enter your choice----";  
    cout<<"\n case 1 your balance";
    cout<<"\n case 2 deposite";
    cout<<"\n case 3 withdraw";
    cout<<"\n case 4 showbalance";
    cout<<"\n case 0 exit";
    cout<<"\n\n";
    cout<<"enter your choice===";
    cin>>ch;
    switch(ch)
    {
      case 1:
        person.yourbalance();
        break;

      case 2:
        cout<<"deposite amount  ------  ";
        cin>>amt;
        person.dodeposite(amt);
      break;

      case 3:
        cout<<"withdraw amount ----";
        cin>>amount;
        person.dowithdraw(amount);
      break;

      case 4:
        cout<<"\n balance="<<person.showbalance();
      break;

      case 0:
        default:
        cout<<"envalid your choice !!!";
      break;
    }
  } while (ch!=0);
  
}