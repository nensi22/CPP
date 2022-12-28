//HYBRIDE BANK INHERITANCE
#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank
{
    protected:
        int saving_balance;
        int current_balance;
    public:
        virtual int deposite();
        virtual int withdraw();
        virtual int showbalance();
};
class Saving:public Bank
{
    protected:
        int savacno;
    public:
        Saving(int balance)
        {
            saving_balance=balance;
        }
        int sav_acno();
        int showbalance();
        int deposite(int);
        int withdraw(int);
};
class Current:public Bank
{
    protected:
        int curacno;
    public:
        Current(int balance)
        {
            current_balance=balance;
        }
        int cur_acno();
        int showbalance();
        int deposite(int);
        int withdraw(int);
};
class Person:public Saving ,public Current
{
    protected:
        string name;
    public:
        Person(string name,int sav_bal,int cur_bal):Saving(sav_bal),Current(cur_bal)
        {
            this->name=name;
        }
        // void creat_ac();
        // void show_ac();
};
// // void Person::creat_ac()....
// // void Person::()....
int Saving::sav_acno()
{
    cout<<"Enter account No=";
    cin>>savacno;
}
int Current::cur_acno()
{
    cout<<"Enter account No=";
    cin>>curacno;
}
// int Current::showbalance()
// {
//     return current_balance;
// }
int Current::deposite(int deposite)
{
    current_balance=current_balance+deposite;
    return current_balance;
}
int Current::withdraw(int withdraw)
{
    if(current_balance>withdraw)
    {
        current_balance=current_balance-withdraw;
        return current_balance;
    }
    else
    {
        cout<<"\n not found money!!";
        return 1;
    }
}
int Current::showbalance()
{
    return current_balance;
}
int Saving::deposite(int deposite)
{
    saving_balance=saving_balance+deposite;
    return saving_balance;
}
int Saving::withdraw(int withdraw)
{
    if(saving_balance>withdraw)
    {
        saving_balance=saving_balance-withdraw;
        return saving_balance;
    }
    else
    {
        cout<<"\n not found money!!!";
        return 1;        
    }
}
int Saving::showbalance()
{
    return saving_balance;
}
int maih()
{
    system("CLS");
    // Person Vrushabh("Vrushabh",1000,12000);
    // Saving sav_obj1(1000);
    // Person pr1;
    // int type;
    // int ch,dp,wt;
    // cout<<"\n 1.savind \n 2.current";
    // cout<<"\n Enter choice number=";
    // cin>>type;
    // if(type==2)
    // {
    //     pr1.creat_ac();
    //     pr1.cur_acno();
    //     do
    //     {
    //         cout<<"\n 1.show your balance..";
    //         cout<<"\n 2.deposite...";
    //         cout<<"\n 3.withdraw...";
    //         cout<<"\n 4.exit...";
    //         cout<<"select number ::::";
    //         cin>>ch;
    //         switch(ch)
    //         {
    //             case 1:
    //                 cout<<"\n your account balance::"<<pr1.cur_showbalance();
    //                 break;

    //             case 2:
    //                 cout<<"\n Enter your deposite=";
    //                 cin>>dp;
    //                 cout<<"\n your deposite="<<dp;
    //                 cout<<"\n your bank balance="<<pr1.cur_deposite(dp);
    //                 break;

    //             case 3:
    //                 cout<<"\n Enter your withdraw=";
    //                 cin>>wt;
    //                 cout<<"\n your deposite="<<wt;
    //                 cout<<"\n your bank balance="<<pr1.cur_withdraw(wt);
    //                 break;

    //             case 4:
    //                 cout<<"\n thank you for visiting vs bank....";
    //                 break;
                
    //             default:
    //                 cout<<"\n your choice is wrong....";
    //                 break;
    //         }
    //     } while (ch<4);
        
    // }
    // else if(type==1)
    // {
    //     pr1.creat_ac();
    //     pr1.sav_acno();
    //     do
    //     {
    //         cout<<"\n 1.show your balance..";
    //         cout<<"\n 2.deposite...";
    //         cout<<"\n 3.withdraw...";
    //         cout<<"\n 4.exit...";
    //         cout<<"select number ::::";
    //         cin>>ch;
    //         switch(ch)
    //         {
    //             case 1:
    //                 cout<<"\n your account balance::"<<pr1.sav_showbalance();
    //                 break;

    //             case 2:
    //                 cout<<"\n Enter your deposite=";
    //                 cin>>dp;
    //                 cout<<"\n your deposite="<<dp;
    //                 cout<<"\n your bank balance="<<pr1.sav_deposite(dp);
    //                 break;

    //             case 3:
    //                 cout<<"\n Enter your withdraw=";
    //                 cin>>wt;
    //                 cout<<"\n your deposite="<<wt;
    //                 cout<<"\n your bank balance="<<pr1.sav_withdraw(wt);
    //                 break;

    //             case 4:
    //                 cout<<"\n thank you for visiting vs bank....";
    //                 break;
                
    //             default:
    //                 cout<<"\n your choice is wrong....";
    //                 break;
    //         }
    //     } while (ch<4);
    // }
    // else
    // {
    //     cout<<"\n your choice wrong";
    // }
}