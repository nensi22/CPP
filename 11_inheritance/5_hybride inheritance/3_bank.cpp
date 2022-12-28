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

class Saving:public BankAccount
{
    protected:
        int acno;
    public:
        Saving(int n)
        {
            savingbalance=n;
        }
        void acnum();
        void savingdeposite(int);
        void savingwithdraw(int);
        int display();
};
void Saving::acnum()
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

class Current:public BankAccount
{
    protected:
        int accno;
    public:
        Current(int n)
        {
            currentbalance=n;
        }
        void accnum();
        void currentdeposite(int);
        void currentwithdraw(int);
        int show();
};
void Current::accnum()
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

class Person:public Saving,public Current
{
     protected:
        string name;
    public:
    Person():Saving(1000),Current(20000)
    {

    }
       void enterdata();
       void print();
};
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
    customer.acnum();
    customer.savingdeposite(1000);
    customer.display();
    customer.savingwithdraw(500);
    customer.display();
}