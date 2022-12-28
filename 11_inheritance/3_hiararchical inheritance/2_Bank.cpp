//hierarchical inheritance
#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
    protected:
        int savingbalance;
        int currentbalance;
    public:
        void s_opening();
        void c_opening();
};

class Saving:public BankAccount
{
    protected:
        int acno;
        string name;
    public:
        void getdata();
        void savingdeposite(int);
        void savingwithdraw(int);
        int diplay();
};

class Current:public BankAccount
{
    protected:
        int accno;
        string cname;
    public:
        void enterdata();
        void currentdeposite(int);
        void currentwithdraw(int);
        int show();
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

void Saving::getdata()
{
   cout<<"enter customer name=";
   fflush(stdin);
   getline(cin,name);
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

int Saving::diplay()
{
    cout<<"\n customer's name="<<name;
    cout<<"\n customer's account no="<<acno;
    cout<<"\n balance is="<<savingbalance;
    return savingbalance;
}

void Current::enterdata()
{
   cout<<"enter customer name=";
   fflush(stdin);
   getline(cin,cname);
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
    cout<<"\n customer's name="<<cname;
    cout<<"\n customer's account no="<<accno;
    cout<<"\n balance is="<<currentbalance;
    return currentbalance;
}

int main()
{
    Saving s1;
    Current c1;
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
        s1.getdata();
        s1.s_opening();
        
        do
        {
            cout<<"\n enter choice=";
            cin>>ch;
            switch (ch)
            {
                case 1:
                    cout<<"\nenter deposite amount=";
                    cin>>amt;
                    s1.savingdeposite(amt);
                break;
                 
                case 2:
                    cout<<"enter your withdraw amount=";
                    cin>>amount;
                    s1.savingwithdraw(amount);
                break;

                case 3:
                    s1.diplay();  
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
        c1.enterdata();
        c1.c_opening();
       
        do
        {
              cout<<"\n enter choice=";
            cin>>ch;
            switch (ch)
            {
                case 1:
                     cout<<"enter deposite amount=";
                     cin>>amn;
                    c1.currentdeposite(amn);
                break;
             
                case 2:
                    cout<<"enter your withdraw amount=";
                    cin>>ant;
                    c1.currentwithdraw(ant);
                break;

                case 3:
                    c1.show();
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
        cout<<"\n not valid your account choice";
    }
}