#include<iostream>
#include<string>
using namespace std;
class Bank
{
        int balance;
    public:
        void customerbalance();
        void dodeposite(int);
        void dowithdraw(int);
        int showbalance();
};

class Customer:public Bank
{
    private:
        int acno,age;
        string name,actype;
    public:
        void getdata();
        void showdata();
        //void balance();
};
void Bank::customerbalance()
{
    cout<<"\nenter customer's balance=";
    cin>>balance;
}
void Bank::dodeposite(int d_amt)
{
    balance+=d_amt;
}
void  Bank::dowithdraw(int w_amt)
{
    if(balance>w_amt)
    {
        balance-=w_amt;
    }
    else
    {
        cout<<"\n not found money";
    }
}
int Bank::showbalance()
{
    return balance;
}
void Customer::getdata()
{
    cout<<"enter customer's name=";
    fflush(stdin);
    getline(cin,name);
    cout<<"enter customer's age=";
    cin>>age;
    cout<<"enter customer's account number=";
    cin>>acno;
    cout<<"enter customer's account type=";
    cin>>actype;
    // cout<<"enter customer's balance=";
    // cin>>balance;
}
void Customer::showdata()
{
    cout<<"\n Customer's name="<<name;
    cout<<"\n Customer's age="<<age;
    cout<<"\n Customer's account number="<<acno;
    cout<<"\n Customer's account type="<<actype;

    //cout<<"\n customer's balance="<<balance;
}
int main()
{
    Customer person;
    int ch,amt,amount;
    cout<<"\n enter your choice----";
    cout<<"\n case 1 deposite";
    cout<<"\n case 2 withdraw";
    cout<<"\n case 3 showbalance";
    cout<<"\n case 0 exit"; 

    cout<<"\n\n";
    person.getdata();
    person.showdata();
    person.customerbalance();
    do
    {
        cout<<"\nenter your choice=";
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
            cout<<"\n balance="<<person.showbalance();
        break;

        case 0:
            default:
            cout<<"\n envalid your choice !!!";
        break;
        }
    } while (ch!=0);
    

}