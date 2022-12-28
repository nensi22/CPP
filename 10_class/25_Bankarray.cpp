#include<iostream>
#include<string>
using namespace std;
class Bank
{
  private:
    int balance,acno;
    string name;
    public:
      void getdata();
      void dodeposite(int);
      void dowithdraw(int);
      int show();
};
void Bank::getdata()
{
  // for(int i=1;i<=3;i++)
  // {
  cout<<"enter holder's name =";
  fflush(stdin);
  getline(cin,name);
  cout<<"holder's account no =";
  cin>>acno;
  cout<<"holder's balance =";
  cin>>balance;
  
}
void Bank::dodeposite(int d_amt)
{
  balance+=d_amt;
}
void Bank::dowithdraw(int w_amt)
{
  if(balance>w_amt)
  {
    balance-=w_amt;
  }
  else
  {
    cout<<"\n you have not withdraw your amount";
  }
}
int Bank::show()
{
  
  cout<<"\n holder's name="<<name;
  cout<<"\n holder's account no "<<acno;
  
  return balance;
}
int main()
{
  Bank person;
  int ch,amt,amount;
  person.getdata();

  cout<<"\n enter your choice----";
  cout<<"\n case 1 deposite";
  cout<<"\n case 2 withdraw";
  cout<<"\n case 3 show";
  cout<<"\n case 0 exit";
  cout<<"\n\n";

  do
  {
    // person.getdata();
    cout<<"\n\n enter your choice=";
    cin>>ch;
    switch (ch)
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
        cout<<"\n balance="<<person.show();
      break;

      case 0:
        default:
        cout<<"envalid your choice !!!";
      break;
    }
  } while (ch!=0);
  
}