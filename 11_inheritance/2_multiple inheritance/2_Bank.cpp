//muktiple inheritance
#include<iostream>
#include<string>
using namespace std;
class Saving
{
    protected:
        int acno;
        int savingbalance;
    public:
        void acinfo();
        void savingdeposite(int);
        void savingwithdraw(int);
        int dis();
};
class Current
{
    protected:
        int accno;
        int currentbalance;
    public:
        void AccInfo();
        void currentdeposite(int);
        void currentwithdraw(int);
        int display();
};
class Person:public Saving,public Current
{
    protected:
        string name;
    public:
       void enterdata();
       void print();
};
void Saving::acinfo()
{
    cout<<"enter customer's account no=";
    cin>>acno;
    cout<<"enter customer's saving opening balance=";
    cin>>savingbalance;
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
int Saving::dis()
{
    cout<<"\n customer's account number="<<acno;
    cout<<"\n customer's balance="<<savingbalance;
    return savingbalance;
}
void Current::AccInfo()
{
    cout<<"enter customer's account no=";
    cin>>accno;
    cout<<"enter customer's current opening balance=";
    cin>>currentbalance;
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
int Current::display()
{
    cout<<"\n customer's account no="<<accno;
    cout<<"\n customer's balance="<<currentbalance;
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
    Person sandy;
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
       sandy.enterdata();
       sandy.acinfo();
       do
       {
            cout<<"\n enter choice=";
            cin>>ch;
            switch (ch)
            {
                case 1:
                    cout<<"\nenter deposite amount=";
                    cin>>amt;
                    sandy.savingdeposite(amt);
                break;
                 
                case 2:
                    cout<<"enter your withdraw amount=";
                    cin>>amount;
                    sandy.savingwithdraw(amount);
                break;

                case 3:
                    sandy.print();
                    sandy.dis();
                    
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
        sandy.enterdata();
        sandy.AccInfo();
        do
        {
            cout<<"\n enter choice=";
            cin>>ch;
            switch (ch)
            {
                 case 1:
                     cout<<"enter deposite amount=";
                     cin>>amn;
                    sandy.currentdeposite(amn);

                break;
                 
                case 2:
                    cout<<"enter your withdraw amount=";
                    cin>>ant;
                    sandy.currentwithdraw(ant);
                break;

                case 3:
                    sandy.print();
                    sandy.display();
                   
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
        cout<<"\n not valid choice ";
    }
}