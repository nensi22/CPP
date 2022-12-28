// constructor over loading
#include<iostream>
using namespace std;
class Bank
{
  double contact;
  int balance,accNumber;
  string name,bankname,surname,address;
  public:

  Bank(int bal)
  {
    balance = bal;
  }
  Bank(string n,string m)//two perameter
  {
    name=n;
    surname=m;
  }

  void getData(double num , string addr)
  {
    contact = num;
    address=addr;
  }  
  void showData( )
  { 
    cout<<"\n Contact : "<<contact ;
    cout<<"\n Address : "<<address;
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
  ~Bank()
  {
     cout<<"\ndestructor calld ......"<<balance;
  }
};
int main()
{
  Bank person(1000);
  int ch,amt,amount,balance;
    person.getData(989889898,"surat");
    person.showData();

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
         cout<<"envalid your choice !!!";
       break;
    }
    } while (ch!=0);

}
