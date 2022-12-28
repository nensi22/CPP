// hybrid inheritance
#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
    protected:
        int savingbalance;
        int currentbalance;
    
        void s_opening();
        void c_opening();
};

class Saving:public BankAccount
{
    protected:
        int acno;
    public:
        Saving(int n)
        {
            savingbalance=n;
        }
        void accnum();
        void savingdeposite(int);
        void savingwithdraw(int);
        int display();
};

class Current:public BankAccount
{
    protected:
        int accno;
    public:
        Current(int n)
        {
            currentbalance=n;
        }
        void acnum();
        void currentdeposite(int);
        void currentwithdraw(int);
        int show();
};

class Person:public Saving,public Current
{
     protected:
        string name;
    public:
    Person():Saving(1000),Current(2000)
    {

    }
       void enterdata();
       void print();
};

void BankAccount::s_opening()
{
    cout<<"enter saving balance=";
    cin>>savingbalance;
}

void BankAccount::c_opening()
{
    cout<<"enter current balance=";
    cin>>currentbalance;
}

void Saving::accnum()
{
   cout<<"enter account no=";
   cin>>acno;
}

void Saving::savingdeposite(int d_amt)
{
    savingbalance+=d_amt;
}

void Saving::savingwithdraw(int w_amt)
{
    if(savingbalance>w_amt)
    {
       savingbalance-=w_amt;
    }
    else
    {
        cout<<"\n not found money";
    }
}

int Saving::display()
{
    cout<<"\n customer's account no="<<acno;
    cout<<"\n balance is="<<savingbalance;
    return savingbalance;
}

void Current::acnum()
{
   cout<<"enter account no=";
   cin>>accno;
}

void Current::currentdeposite(int damt)
{
    currentbalance+=damt;
}

void Current::currentwithdraw(int wamt)
{    
    if(currentbalance>wamt)
    {
        currentbalance-=wamt;
    }
    else
    {
        cout<<"\n not found money";
    }
}

int Current::show()
{
    cout<<"\n customer's account no="<<accno;
    cout<<"\n balance is="<<currentbalance;
    return currentbalance;
}

void Person::enterdata()
{
    cout<<"enter customer name=";
    fflush(stdin);
    getline(cin,name);
}

void Person::print()
{
    cout<<"\n customer's name="<<name;
}

int main()
{
    Person customer;
    char typ;
    int ch,amt,amount,amn,ant;
    
    cout<<"\n S = Saving Account";
    cout<<"\n C = Current Account";
    cout<<"\n enter account choice=";
    cin>>typ;
    cout<<"\n  choice----";
    cout<<"\n case 1 deposite ";
    cout<<"\n case 2 withdraw ";
    cout<<"\n case 3 display all detail";
    cout<<"\n case 0 exit"; 
    cout<<"\n\n";
    if(typ=='S')
    {
        customer.enterdata();
        customer.accnum();
        do
        {
            cout<<"\n enter choice=";
            cin>>ch;
            switch (ch)
            {
                case 1:
                    cout<<"\nenter deposite amount=";
                    cin>>amt;
                    customer.savingdeposite(amt);
                break;
                 
                case 2:
                    cout<<"enter your withdraw amount=";
                    cin>>amount;
                    customer.savingwithdraw(amount);
                break;

                case 3:
                    customer.print();
                    customer.display();
                    
                break;

                case 0:
                    default:
                    cout<<"\n envalid choice";
                break;
            }
        } while (ch!=0);
    }
    else if(typ=='C' )
    {
        customer.enterdata();
        customer.acnum();
        do
        {
            cout<<"\n enter choice=";
            cin>>ch;
            switch (ch)
            {
                case 1:
                    cout<<"enter deposite amount=";
                    cin>>amn;
                    customer.currentdeposite(amn);
                break;
                 
                case 2:
                    cout<<"enter your withdraw amount=";
                    cin>>ant;
                    customer.currentwithdraw(ant);
                break;

                case 3:
                    customer.print();
                    customer.show();
                   
                break;

                case 0:
                    default:
                    cout<<"\n envalid choice";
                break;
            }
        } while (ch!=0);
    }
    else
    {
        cout<<"\n not valid choice";
    }
}